#include <iostream>
using namespace std;

#include "swap.h"
using namespace std;
//创建.h后缀名的头文件
//创建.cpp后缀名的源文件
//在头文件中写函数的声明
//在源文件中写函数的定义

//函数的声明 
//void swap(int a,int b);
int main()
{
	int a=0;
	int b=0; 
	cin >> a;
	cin >> b;
	
	swap(a,b);
	system("pause");
	return 0;
}

//函数的定义 
void swap(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
