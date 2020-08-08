#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,t,n;
	int *a;
	printf("请输入数组长度：");
	scanf("%d",&n);
	//动态分配内存
	a=(int *)malloc(n*sizeof(int));
	printf("请输入数组元素值：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//数组元素平方
	for(i=0;i<n;i++)
		a[i]=a[i]*a[i];
	//选择排序
	for(i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t; 
			}
	//输出排列好的元素
	for(i=0;i<n;i++)	
		printf("%d\t",a[i]);
	return 0; 
}
