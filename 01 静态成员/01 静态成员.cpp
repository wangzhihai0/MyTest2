#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

231
2

2

231651+8185//1、静态成员变量
class Person
{
public:
	static int m_A; //所有对象都共享数据
	// 类内声明，类外必须初始化
	// 在编译阶段就分配内存

	static void func()  //静态成员函数
	{
		m_A = 1000; //静态成员函数中可以访问静态成员变量
		//m_C = 1000; //静态成员函数中 不可以访问 非静态成员变量
		cout << "静态成员函数调用" << endl;
	}

	//普通成员函数  可以访问静态成员变量 和  非静态成员变量
	void func3()
	{
		m_C = 1000;
		m_A = 1000;
		m_B = 1000;
	}

	int m_C;

private:

	static void func2()//私有权限类外访问不到
	{
	
	}

	static int m_B;

};

int Person::m_A = 0;
int Person::m_B = 0;


void test01()
{
	//访问方式
	//通过对象进行访问
	Person p1;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;

	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p2.m_A = " << p2.m_A << endl;

	//通过类名
	cout << "通过类名访问： " << Person::m_A << endl;

	//静态成员变量 也是有访问权限的
	//Person::m_B = 100; m_B私有权限 类外访问不到

}

void test02()
{
	//静态成员函数 调用方式
	//通过对象
	Person p1;
	p1.func();

	//通过类名
	Person::func();
	cout << "m_A = " << Person::m_A << endl;

	//静态成员函数 也是有访问权限的
	//Person::func2();
}

int main(){

	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}