//封装一个函数，利用冒泡排序，实现对整型数组的升序排序 
#include <iostream>
using namespace std;

void bubblesort(int *arr,int len)
{
	for(int i=1;i<len;i++)
		for(int j=0;j<len-i;j++)	
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
}
int main()
{
	int n;
	cout << "请输入你想排序的元素个数：" << endl;
	cin >> n;
	
	int *a;
	a=new int[n];
	
	cout << "请输入你想排序的元素：" <<endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	bubblesort(a,n);
	
	cout << "已排序的数组如下：" << endl;
	
	for(int i=0;i<n;i++)	
		cout << a[i] << "\t";
	cout << endl;
	system("pause");
	return 0;
} 
