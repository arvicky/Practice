#include<iostream>
#include<string>
#include"point.h"
#include"Circle.h"
using namespace std;

void isINcircle(Circle& c, Point& p)
{
	//计算两点距离平方
	int distance = (c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2;
	//计算半径平方
	int disR = (c.getR()) ^ 2;
	//判断关系
	if (distance == disR)
	{
		cout << "点在圆上" << endl;
	}
	if (distance < disR)
	{
		cout << "点在圆内" << endl;
	}
	if (distance > disR)
	{
		cout << "点在圆外" << endl;
	}
}
int main()
{
	//输入点的X和Y位置
	int X1, Y1;
	Point C1;
	cout << "输入点坐标X——" << endl;
	cin >> X1;

	cout << "输入点坐标Y——" << endl;
	cin >> Y1;
	C1.setX(X1);
	C1.setY(Y1);
	//创建圆.输入圆的半径

	Circle C2;
	C2.setR(6);
	int X2 = 3, Y2 = 6;
	Point C3;
	//设置圆心的位置
	C3.setX(X2);
	C3.setY(Y2);
	C2.setCenter(C3);//将点C3 设置为C2圆的圆心
	//比较
	isINcircle(C2, C1);
	return 0;
}