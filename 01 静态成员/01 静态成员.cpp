#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

231
2

2

231651+8185//1����̬��Ա����
class Person
{
public:
	static int m_A; //���ж��󶼹�������
	// ������������������ʼ��
	// �ڱ���׶ξͷ����ڴ�

	static void func()  //��̬��Ա����
	{
		m_A = 1000; //��̬��Ա�����п��Է��ʾ�̬��Ա����
		//m_C = 1000; //��̬��Ա������ �����Է��� �Ǿ�̬��Ա����
		cout << "��̬��Ա��������" << endl;
	}

	//��ͨ��Ա����  ���Է��ʾ�̬��Ա���� ��  �Ǿ�̬��Ա����
	void func3()
	{
		m_C = 1000;
		m_A = 1000;
		m_B = 1000;
	}

	int m_C;

private:

	static void func2()//˽��Ȩ��������ʲ���
	{
	
	}

	static int m_B;

};

int Person::m_A = 0;
int Person::m_B = 0;


void test01()
{
	//���ʷ�ʽ
	//ͨ��������з���
	Person p1;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 100;

	cout << "p1.m_A = " << p1.m_A << endl;
	cout << "p2.m_A = " << p2.m_A << endl;

	//ͨ������
	cout << "ͨ���������ʣ� " << Person::m_A << endl;

	//��̬��Ա���� Ҳ���з���Ȩ�޵�
	//Person::m_B = 100; m_B˽��Ȩ�� ������ʲ���

}

void test02()
{
	//��̬��Ա���� ���÷�ʽ
	//ͨ������
	Person p1;
	p1.func();

	//ͨ������
	Person::func();
	cout << "m_A = " << Person::m_A << endl;

	//��̬��Ա���� Ҳ���з���Ȩ�޵�
	//Person::func2();
}

int main(){

	//test01();
	test02();
	system("pause");
	return EXIT_SUCCESS;
}