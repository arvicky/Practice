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
	//����Բ��
	void Circle::setCenter(Point Center)
	{
		Circle::m_Center = Center;
	}
	//��ȡԲ��
	Point Circle::getCenter()
	{
		return Circle::m_Center;
	}
