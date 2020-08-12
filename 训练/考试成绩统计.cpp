#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout << "请输入学生人数：";
	cin >> m;
	
	cout << "请输入要统计的科目门数：";
	cin >> n;
	
	int a[m][n];
	
	int sum=0;
	cout << "请输入每科成绩：" << endl;
	for(int i=0;i<m;i++)	
	{
		for(int j=0;j<n;j++)
		{
			cin >> a[i][j];
			sum+=a[i][j];
		}
		cout << "第" << i+1 << "个同学的总成绩是" << sum <<endl; 
	}
	system("pause");
	return 0;
}
