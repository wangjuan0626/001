#include <stdio.h>
/*从起点到终点总共有m+n-2次需要选择走下或右，
而选择走下有n-1次，所以结果就是C（m+n-2，m-1）*/ 
int main()
{
	int m,n;
	printf("请输入网格的行数m：");
	scanf("%d",&m);
	printf("请输入网格的列数n：");
	scanf("%d",&n);
	
	int sum=1;
	int i; 
	
	if(m<n)
	{
		i=m;
		m=n;
		n=i;
	}
	for(i=n;i<=m+n-2;i++)
		sum=sum*i;
	for(i=1;i<=m-1;i++)
		sum=sum/i;
	printf("共有%d条不同的路径！\n",sum);
	return 0;
}
