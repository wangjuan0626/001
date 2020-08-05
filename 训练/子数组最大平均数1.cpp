#include <iostream>
using namespace std;
int main()
{
	//定义数组元素个数
	int num;
	cout << "请输入数组的大小：";
	cin >> num;
	//指针指向数组
	int *a;
	//动态内存分配
	a=new int[num];
	//输入数组元素
	cout << "请输入数组元素：\n";
	for(int i=0;i<num;i++)
		cin >> a[i];
	//定义元素
	int k;
	double s,max;
	//赋初值
	s=max=0; 
	cout << "请输入连续子数组长度(小于数组长度)：";
	cin >> k;
	//计算平均数
	for(int j=0;j<num;j++)
	{
		//计算数组元素和 
		s+=a[j];
		//判断当前索引是否大于k-1，即是否含k个元素 
		if(j>=k-1)
		{
			//当大于时，更新s 
			if(j>k-1)
				s=s-a[j-k];
			if(s/k>max)
				max=s/k;
		}
	}
	cout << "最大平均数是：" << max << endl;
	delete []a;
	system("pause");
	return 0;
}
