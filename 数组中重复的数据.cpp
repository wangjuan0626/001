#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "请输入一维数组长度：";
	cin >> n;
	
	int *a;
	a=new int[n];
	
	cout << "请输入数组元素：" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	//冒泡排序
	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			} 
	
	//筛选出重复出现的元素
	for(int m=0;m<n;m++)
		if(a[m]==a[m+1])
			cout << a[m] << "\t";
	cout << endl;
	delete []a;
	system("pause");
	return 0; 
}
