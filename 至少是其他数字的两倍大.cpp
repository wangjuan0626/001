#include <iostream>
using namespace std;
int main()
{
	int num;//定义数组元素个数
	cout << "请输入数组的大小：" ;
	cin >> num; 
	int *a;
	a=new int[num];
	
	cout << "请输入数组元素：" << endl;
	for(int i=0;i<num;i++)
		cin >> a[i];
	//定义最大元素并赋初值 
	int k=0;
	//定义最大元素的下标并赋初值
	int index=0; 
	//寻找最大元素 
	for(int i=0;i<num;i++)
		if(k<a[i])
		{
			k=a[i];
			index=i;
		}
	int m=0; 
	for(int i=0;i<num;i++)
		while(i != index)
		{
			if(k>=2*a[i])
			{
				m++;
				if(m==(num-1))
					cout << index << endl;
			}
			else 
			{
				cout << "-1" << endl;
				break; 
			}
		}
	delete []a;
	system("pause");
	return 0;	
}
