#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("请输入一维数组的长度：");
	scanf("%d",&n);
	
	int *a;
	//动态分配内存
	a=(int *)malloc(n*sizeof(int));
	printf("请输入数组元素：\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	//选择排序
	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	//定义计数标志
	int count=1;
	//定义最大幸运数
	int max=0; 
	for(int i=0;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			count++;
		}	
		else
			if(count==a[i])
				if(max<a[i])
				{
					max=a[i];
					count=0;
				}
	}	
	if(max!=0)
		printf("幸运数是%d!\n",max);
	else
		printf("-1");
	free(0);
	return 0;	 
} 
