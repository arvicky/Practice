#include <stdio.h>
#include<iostream>
using namespace std;

int mad(int number)
{
	int a, b;
	a = 0;
	b = 0;
	int arr[][4] = {    1,2,3,4,
						5,6,7,8,
						9,10,11,12,
						13,14,15,16 };
	for (a = 0; a <= 3; a++)
	{
		if (number < arr[a][3])
		{
			for (b = 0; b <= 3; b++)
			{
				if (number == arr[a][b])
				{
					return 1;
				}
				else
					continue;
			}
		}
		if (number == arr[a][3])
		{
			return 1;
		}	
		if (number > arr[a][3])
		{
			if (a <= 4)   //С��������
			{
				continue;
			}
			else   //�����ж�����������Ȼû�ҵ�
				return 0;
		}
			
		return 0;
	}
}


int main()
{
	int a, b;
	a = 0;
	b = 0;
	int number;
	int arr[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	cout << "������Ҫ���ҵ�����" << endl;
	cin >> number;
	cout << number << endl;
	int result = mad(number);
	if (result == 1)
	{
		cout << "�ҵ���" << endl;
	}
	else
		cout << "û�ҵ�" << endl;
	
	system("pause");
	return 0;
}