#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int *a;
	
	printf("请输入一维数组的长度：");
	scanf("%d",&n);
	
	a=(int *)malloc(n*sizeof(int));
	printf("请输入数组元素：\n");
	for(int i=0;i<n;i++)	
		scanf("%d",&a[i]);
		
	int output[n];
	
	for(int i=0;i<n;i++)
		output[i]=1;
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(i!=j)
				output[j]=output[j]*a[i];
			else
				output[j]=output[j];
		}
	for(int i=0;i<n;i++)
		printf("%d\t",output[i]);
	free(a);
	return 0; 
}
