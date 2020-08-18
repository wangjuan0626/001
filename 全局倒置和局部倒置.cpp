#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一维数组长度：";
	cin >>n;
	
	int *a;
	a=new int[n];
	cout << "请输入数组元素:" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	int M=0;//定义全局变量个数并赋初值 
	int m=0;//定义局部变量个数并赋初值
	
	//统计全局变量个数
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j])
				M++;
	
	//统计局部变量个数
	for(int i=0;i<n-1;i++)
		if(a[i]>a[i+1])
			m++;
	
	//比较两者大小
	if(m==M)
		cout << "ture!" << endl;
	else
		cout << "false!" << endl;
	
	delete []a;
	system("pause");
	return 0;
		 
}
