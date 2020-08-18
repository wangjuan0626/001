#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "请输入一维数组的长度：";
	cin >> n;
	
	int *a;
	a=new int[n];
	
	cout << "请输入数组元素：（仅能输入0和1）：" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	//定义计数元素并赋初值 
	int count=0; 
	//定义最大元素并赋初值
	int max=0;
	
	//统计连续1的个数
	for(int i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			count++;
			if(max<count)
				max=count;
		} 
		else
		{	
			count=0;
		}
	}
	cout << "最大个连续1的个数是" << max << endl;
	delete []a;
	system("pause");
	return 0;
}
