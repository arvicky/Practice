#include<iostream>
#include<string>
#include"point.h"
#include"Circle.h"
using namespace std;

void isINcircle(Circle& c, Point& p)
{
	//�����������ƽ��
	int distance = (c.getCenter().getX() - p.getX()) ^ 2 + (c.getCenter().getY() - p.getY()) ^ 2;
	//����뾶ƽ��
	int disR = (c.getR()) ^ 2;
	//�жϹ�ϵ
	if (distance == disR)
	{
		cout << "����Բ��" << endl;
	}
	if (distance < disR)
	{
		cout << "����Բ��" << endl;
	}
	if (distance > disR)
	{
		cout << "����Բ��" << endl;
	}
}
int main()
{
	//������X��Yλ��
	int X1, Y1;
	Point C1;
	cout << "���������X����" << endl;
	cin >> X1;

	cout << "���������Y����" << endl;
	cin >> Y1;
	C1.setX(X1);
	C1.setY(Y1);
	//����Բ.����Բ�İ뾶

	Circle C2;
	C2.setR(6);
	int X2 = 3, Y2 = 6;
	Point C3;
	//����Բ�ĵ�λ��
	C3.setX(X2);
	C3.setY(Y2);
	C2.setCenter(C3);//����C3 ����ΪC2Բ��Բ��
	//�Ƚ�
	isINcircle(C2, C1);
	return 0;
}