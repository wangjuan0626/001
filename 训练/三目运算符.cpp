//语法：表达式1 ? 表达式2 ：表达式3
//解释：如果表达式1的值为真，执行表达式2，并返回表达式2的结果
//      如果表达式1的值为假，执行表达式3，并返回表达式3的结果 
#include <iostream>
using namespace std;
int main()
{
	//三目运算符
	//创建三个变量a,b,c
	//将a和b比较，将变量大的值赋值给变量c
	int a=20;
	int b=10;
	int c=0;
	
	c=a>b ? a:b;
	cout << "c=" << c << endl;
	
	//在c++中，三目运算符返回的是变量，可以继续赋值
	(a>b ? a:b)=100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl; 
	system("pause");
	return 0; 
}
