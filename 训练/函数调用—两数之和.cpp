#include <iostream>
using namespace std;
int add(int a,int b)
{
	int sum;
	sum=a+b;
	return sum; 
}
int main()
{
	int a,b;
	cout << "请输入两个数字：" << endl;
	cin >> a;
	cin >> b;
	int sum=add(a,b);
	cout << a << "和" << b << "相加的结果是" << sum <<endl;
	system("pause");
	return 0; 
}
