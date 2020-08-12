#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入一维数组长度：";
	cin >> n;
	
	int *a;
	a=new int[n];
	
	cout << "请输入数组元素(排序前)：" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
		
	//冒泡排序	
	for(int i=1;i<n;i++) //排序轮数 
		for(int j=0;j<n-i;j++)//循环次数
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			} 
	cout << "交换后的数组元素顺序为：" << endl;
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	delete []a;
	system("pause");
	return 0;
}
