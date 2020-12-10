#pragma once
#include<iostream>
#include"point.h"
class Circle
{
	//构造函数
	//无返回值不用void 函数名与类相同  可以有参数 可以重载
	//创建对象后会自动调用，而且只调用一次
public://属性

	void setR(int r);

		int getR();

	//设置圆心
		void setCenter(Point Center);

	//获取圆心
		Point getCenter();

private:
	//属性
	Point m_Center;
	int m_R;//半径
};
