#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "seqStack.h"


//#define  MAX 1024
//
//struct SStack
//{
//	void * data[MAX];
//	int m_Size;
//};
//
//typedef void * SeqStack;
//
////初始化栈
//SeqStack init_SeqStack()
//{
//	struct SStack *myStack = malloc(sizeof(struct SStack));
//
//	if ( myStack == NULL)
//	{
//		return NULL;
//	}
//
//	memset(myStack->data, 0, sizeof(void *)* MAX); //数组置空
//
//	myStack->m_Size = 0;
//
//	return myStack;
//}
////入栈
//
//void push_SeqStack(SeqStack stack , void * data)
//{
//	//本质就是数组尾插
//
//	if (stack == NULL)
//	{
//		return;
//	}
//	if ( data == NULL)
//	{
//		return;
//	}
//
//	struct SStack * myStack = stack;
//
//	if (myStack->m_Size == MAX)
//	{
//		return;
//	}
//
//	myStack->data[myStack->m_Size] = data;
//
//	myStack->m_Size++;
//
//}
//
//
////出栈
//void pop_SeqStack(SeqStack stack)
//{
//	//出栈本质 尾删
//	if (stack == NULL)
//	{
//		return;
//	}
//	struct SStack * myStack = stack;
//
//	//如果是空栈 直接 return
//	if (myStack->m_Size == 0)
//	{
//		return;
//	}
//
//	myStack->data[myStack->m_Size - 1] = NULL;
//	myStack->m_Size--;
//}
//
//
////返回栈顶元素
//void * top_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return NULL;
//	}
//	struct SStack * myStack = stack;
//
//	//如果是空栈 返回NULL
//	if ( myStack->m_Size == 0)
//	{
//		return NULL;
//	}
//
//	return myStack->data[myStack->m_Size - 1];
//}
//
//
////获取栈大小
//int size_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return 0;
//	}
//	struct SStack * myStack = stack;
//
//	return myStack->m_Size;
//
//}
//
////判断栈是否为空
//int isEmpty_SeqStack(SeqStack stack)
//{
//
//	if (stack == NULL)
//	{
//		return -1; //如果传入的是NULL，返回也是空栈
//	}
//	struct SStack * myStack = stack;
//
//	if (myStack->m_Size == 0)
//	{
//		return 1;
//	}
//
//	return 0;
//
//}
//
//
////销毁栈
//void destroy_SeqStack(SeqStack stack)
//{
//	if (stack == NULL)
//	{
//		return; 
//	}
//
//	free(stack);
//	stack = NULL;
//}





//测试
struct Person
{
	char name[64];
	int age;
};

void test01()
{
	//初始化栈
	SeqStack myStack = init_SeqStack();


	//准备数据
	struct Person p1 = {  "aaa", 10 };
	struct Person p2 = {  "bbb", 20 };
	struct Person p3 = {  "ccc", 30 };
	struct Person p4 = {  "ddd", 40 };
	struct Person p5 = {  "eee", 50 };

	//入栈
	push_SeqStack(myStack, &p1);
	push_SeqStack(myStack, &p2);
	push_SeqStack(myStack, &p3);
	push_SeqStack(myStack, &p4);
	push_SeqStack(myStack, &p5);

	while ( isEmpty_SeqStack(myStack) == 0 ) //只要栈不为空  查看栈顶 并且出栈
	{
		struct Person * pTop = top_SeqStack(myStack);
		printf("姓名：%s  年龄: %d\n", pTop->name, pTop->age);

		//出栈
		pop_SeqStack(myStack);
	}

	//查看栈中元素个数
	printf("元素个数为：%d\n", size_SeqStack(myStack));


	destroy_SeqStack(myStack);
	myStack = NULL;

}

int main(){

	test01();

	system("pause");
	return EXIT_SUCCESS;
}