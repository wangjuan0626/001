#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一维数组长度：" ;
	cin >> n;
	
	int *a;
	a=new int[n];
	cout << "请输入数组元素：" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	int target;
	cout << "请输入目标值：";
	cin >> target;
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)	
			if(a[i]+a[j]==target)
				cout << a[i] << "->" << a[j] << endl;
	delete []a;
	system("pause");
	return 0; 
} 
