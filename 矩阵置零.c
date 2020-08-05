#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,p,q,m,n;
	printf("请输入二维数组的行数m和列数n：");
	scanf("%d%d",&m,&n);
	//定义二维数组 
	int a[m][n];
	//输入数组元素
	printf("请输入数组元素：\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	//定义另外一个数组
	int b[m][n];
	//令该数组等于a数组 
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[i][j];
	//寻找0的位置
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			//如果等于0，则令其所对应的b数组的该行列数为0 
			if(a[i][j]==0)
			{
				for(p=0;p<m;p++)
					b[p][j]=0;
				for(q=0;q<n;q++)
					b[i][q]=0;
			} 
		}
				
	//输出数组元素 
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",b[i][j]);
		printf("\n");
	}
	free(a);
	return 0;
}
