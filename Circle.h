#pragma once
#include<iostream>
#include"point.h"
class Circle
{
	//���캯��
	//�޷���ֵ����void ������������ͬ  �����в��� ��������
	//�����������Զ����ã�����ֻ����һ��
public://����

	void setR(int r);

		int getR();

	//����Բ��
		void setCenter(Point Center);

	//��ȡԲ��
		Point getCenter();

private:
	//����
	Point m_Center;
	int m_R;//�뾶
};
