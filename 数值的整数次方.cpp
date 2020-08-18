#include <iostream>
using namespace std;
double power(double base,int exponent)
{
	double s=1.000000;
	if(exponent>0)
		for(int i=0;i<exponent;i++)
			s=s*base;
	else if(exponent=0)
		s=1;
	else
	{	
		s=1.00/base;
		for(int i=exponent;i<=0;i++)
			s=s*s;
	}
	return s;
}
int main(int argc,char *argv[])
{
	double a;
	int b;
	cout << "请输入数值：";
	cin >> a;
	cout << "请输入要计算的整数次方：";
	cin >> b;
	
	double sum=power(a,b);
	cout << a << "的" << b << "次方的值是" << sum << endl;
	
	system("pause");
	return 0;
}
