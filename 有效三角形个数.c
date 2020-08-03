//有效三角形的个数
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
	printf("请输入三角形边长长度：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//计算两边之长大于第三边
	for(i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int m=j+1;m<n;m++)
				if((a[i]+a[j])>a[m])
					printf("[%d,%d,%d]\n",a[i],a[j],a[m]);
	free(a);
	return 0; 
} 
