#include <iostream>
using namespace std;
void swap(int a,int b)
{
	int tmp;
	tmp=a;
	a=b;
	b=tmp;
	
	cout << "交换后：" << endl;
	cout << "a= " << a << "\tb= " << b << endl;
	return;
}

int main()
{
	int a,b;
	cout << "请输入需要交换的数据：" << endl;
	cin >> a;
	cin >> b;
	
	cout << "交换前：" << endl;
	cout << "a= " << a << "\tb= " << b << endl;
	
	swap(a,b);
	
	system("pause");
	return 0;
}
