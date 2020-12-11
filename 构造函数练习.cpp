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
//	//初始化列表初始属性
//	person(int a,int b,int c) : m_a(a), m_b(b), m_c(c)
//	{
//	
//		cout << "构造函数调用" << endl;
//	}
//	~person()
//	{//手动释放堆区内存
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "析构函数调用" << endl;
//	}
//	person(int age1,int Height)
//	{
//		m_age = age1;
//		m_Height = new int(Height);//用指针接收
//		cout << "有参函数调用" << endl;
//	}//拷贝构造函数的调用
//	person(const person& p)
//	{
//		cout << "person拷贝构造函数调用" << endl;
//		m_age = p.age;
//		//浅拷贝方式m_Height = p.m_Height;
//		m_Height = new int(*p.m_Height);
//	}
//	////拷贝调用函数
//	//person(const person& p)
//	//{
//	//	
//	//	m_age = p.age; 
//	//	cout << "有参拷贝函数" << endl;
//	//}
//	//
//};
//void test()
//{
//	////括号法
//	//person one(10);//有参调用
//	//person sec(one);//调用拷贝构造函数
//	////显示法
//	//person p2 = person(10); //有参数构造
//	//person(10); //匿名对象  前行执行结束后立即回收
//
//	person p1(18, 100);  //括号改造函数
//	person p2(p1);//拷贝构造函数
//	cout << "1de 年龄为" << p1.m_age <<"1de 身高为"<< *p1.m_Height << endl;
//	cout << "2de 年龄为" << p2.m_age << "2de 身高为" << *p2.m_Height << endl;
//	person p3;
//	cout << p3.m_a << "   ====" << p3.m_b << p3.m_c << endl;
//}
//******************************************************************
//类对象是另一个类的成员
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
	person H("阿萨德","VIVO");

	cout << "人名字是——" << H.pname << "手机——" << H.pp << endl;
}
int main()
{
	test();
	return 0;
}