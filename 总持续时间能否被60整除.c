#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	printf("请输入一维数组的长度：");
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n*sizeof(int));
	printf("请输入一维数组的元素:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	//定义计数元素并赋初值 
	int count =0;
	//利用循环计算总持续时间是否能被60整除
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if((a[i]+a[j])%60==0)
				count++;
	printf("%d",count);
	return 0;
}
