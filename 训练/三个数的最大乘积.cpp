#include <iostream>
using namespace std;
int main()
{
	//定义数组元素个数 
	int arraysize;
	cout << "请输入数组大小:" ;
	cin >> arraysize;
	//指针指向数组 
	int *array; 
	//动态分配内存 
	array=new int[arraysize];
	//输入数组元素
	cout << "请输入数组元素：\n";
	for(int i=0;i<arraysize;i++)
		cin >> array[i]; 
	//定义最大乘积 
	int max=0;
	//定义三数乘积;
	int s;
	//计算乘积 
	for(int i=0;i<arraysize;i++)
		for(int j=i+1;j<arraysize;j++)
			for(int m=j+1;m<arraysize;m++)
			{
				s=array[i]*array[j]*array[m];
				if(max<s)
					max=s;
			}	
	cout << "三个数最大乘积是：" << max <<endl;				 
	//释放内存 
	delete []array;
	system("pause");
	return 0;
}
