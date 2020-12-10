#pragma once
#include<iostream>
using namespace std;
//只留声明
class Point
{
public:
	void setX(int X);

	//获取X
	int getX();
	
	void setY(int Y);

	//获取Y
	int getY();
	
private:
	int m_X;
	int m_Y;
};