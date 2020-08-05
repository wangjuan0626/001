#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	int *a;
	printf("请输入一维数组的长度：");
	scanf("%d",&n);
	//动态分配内存
	a=(int *)malloc(n*sizeof(int));
	printf("请输入数组元素：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//定义判断标志
	int count=1;
	//定义最长连续序列
	int max=1; 
	//判断是否连续
	for(i=0;i<n;i++)
	{
		if(a[i]<a[i+1])
		{
			count++;
			if(max<count)
				max=count;
		}
		else
			count=1;
	}
	printf("最长连续递增序列长度为%d!\n",max);
	free(a);
	return 0;
} 
