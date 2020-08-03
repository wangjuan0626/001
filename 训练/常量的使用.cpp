#include <iostream>
//常量定义方式
//1.define 常量名 数值
//2.const 修饰的变量 
#define day 7
using namespace std;
int main()
{
	//宏变量不可修改 day= 14 系统报错 
	cout << "一周有" << day << "天" << endl; 
	const int mouth=12;
	//mouth=24 系统报错 const定义值不可修改 
	cout << "一年有" << mouth << "月" << endl; 
	system("pause");
	return 0;	
}
