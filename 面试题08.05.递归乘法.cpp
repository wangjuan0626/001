//递归乘法：要求不使用称号运算符
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "请输入两个正整数：" << endl;
	cin >> a;
	cin >> b;
	
	int sum=0;
	
	if(a<b)
	{
		int temp=a;
		a=b;
		b=temp;
	}
	
	for(int j=0;j<b;j++)
		sum+=a;
		
	cout << a << "和" << b << "的乘积为" << sum << endl;
	system("pause");
	return 0;
} 
