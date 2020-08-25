#include <iostream>
using namespace std;
//区别值传递和地址传递 
void swap(int *p,int *p2)
{
	int temp=*p;
	*p=*p2;
	*p2=temp;
}
int main()
{
	int a=10;
	int b=20;
	cout << "交换前：" << endl;
	cout << a << endl;
	cout << b << endl;
	swap(&a,&b);//交换地址 
	
	cout << "交换后：" << endl;
	cout << a << endl;
	cout << b << endl;
	
	system("pause");
	return 0;
}
