#include<iostream>
#include<string>
#include"point.h"
#include"Circle.h"

	void Circle::setR(int r)
	{
		m_R = r;
	}
	int Circle::getR()
	{
		return Circle::m_R;
	}
	//设置圆心
	void Circle::setCenter(Point Center)
	{
		Circle::m_Center = Center;
	}
	//获取圆心
	Point Circle::getCenter()
	{
		return Circle::m_Center;
	}
