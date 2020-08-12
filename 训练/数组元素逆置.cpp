#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "请输入数组长度：";
	cin >> n;
	
	int *a;
	a=new int[n];
	cout << "请输入数组元素:" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	//元素逆序
	int tmp=0;
	
	for(int i=0;i<n/2;i++)
		{
			tmp=a[i];
			a[i]=a[n-i-1];
			a[n-i-1]=tmp;
		}	
	for(int i=0;i<n;i++)	
		cout << a[i] << '\t';
	cout << endl;
	delete []a;
	system("pause");
	return 0;
}
