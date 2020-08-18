#include <iostream>
using namespace std;
int main()
{
	cout << "0--未种植花朵" << endl;
	cout << "1--已种植花朵" << endl;
	
	int n;
	cout << "请输入花坛可种植区域的总长度：";
	cin >> n;
	
	int *a;
	a=new int[n];
	cout << "请输入该区域是否已经种植花朵：" << endl;
	for(int i=0;i<n;i++)
		cin >> a[i];
	
	int count;
	cout << "请输入你想种植的花朵株数：";
	cin >> count;
	//开始计算最多可种植花朵
	int max=0;
	
	for(int i=1;i<n;i++)
	{
		//当相邻的三个区域均为空时 
		if((a[i-1]==a[i]==a[i+1])==0)
		{
			//令i值增加，避免重复运算 
			max++;
			i=i+1;
		}
		//不等则照常运行 
		else
			i=i;
	}
	
	if(max>=count)
		cout << "ture!" << endl;
	else
		cout << "false!" << endl;
	
	delete []a;
	system("pause");
	return 0;		
}
