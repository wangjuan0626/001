#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout << "请输入二维数组的行数m:";
	cin >> m;
	
	cout << "请输入二维数组的列数n:";
	cin >> n;
	
	int a[m][n];
	
	//输入数组元素
	cout << "请输入数组元素：" << endl;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin >>  a[i][j]; 
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	system("pause");
	return 0;
} 
