#include<iostream>
#include<string>
using namespace std;
//class person
//{
//public:
//	int m_age;
//	int age;
//	int* m_Height = NULL;
//	int m_a, m_b, m_c;
//	//��ʼ���б��ʼ����
//	person(int a,int b,int c) : m_a(a), m_b(b), m_c(c)
//	{
//	
//		cout << "���캯������" << endl;
//	}
//	~person()
//	{//�ֶ��ͷŶ����ڴ�
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "������������" << endl;
//	}
//	person(int age1,int Height)
//	{
//		m_age = age1;
//		m_Height = new int(Height);//��ָ�����
//		cout << "�вκ�������" << endl;
//	}//�������캯���ĵ���
//	person(const person& p)
//	{
//		cout << "person�������캯������" << endl;
//		m_age = p.age;
//		//ǳ������ʽm_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//	////�������ú���
//	//person(const person& p)
//	//{
//	//	
//	//	m_age = p.age; 
//	//	cout << "�вο�������" << endl;
//	//}
//	//
//};
//void test()
//{
//	////���ŷ�
//	//person one(10);//�вε���
//	//person sec(one);//���ÿ������캯��
//	////��ʾ��
//	//person p2 = person(10); //�в�������
//	//person(10); //��������  ǰ��ִ�н�������������
//
//	person p1(18, 100);  //���Ÿ��캯��
//	person p2(p1);//�������캯��
//	cout << "1de ����Ϊ" << p1.m_age <<"1de ���Ϊ"<< *p1.m_Height << endl;
//	cout << "2de ����Ϊ" << p2.m_age << "2de ���Ϊ" << *p2.m_Height << endl;
//	person p3;
//	cout << p3.m_a << "   ====" << p3.m_b << p3.m_c << endl;
//}
//******************************************************************
//���������һ����ĳ�Ա
class Phone
{
public:

	Phone(string name) :N_name(name)
	{

	}
private:
	string N_name;

};

class person
{
public:
	string pname;
	string pp;
	person(string name, string PP):pname(name),pp(PP)
	{

	}



};
void test()
{
	person H("������","VIVO");

	cout << "�������ǡ���" << H.pname << "�ֻ�����" << H.pp << endl;
}
int main()
{
	test();
	return 0;
}