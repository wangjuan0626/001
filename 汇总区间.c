#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,j,n;
	printf("请输入一维数组长度：");
	scanf("%d",&n);
	
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	printf("请按大小顺序输入数组元素：\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	int count=1;
	int max=1;
	i=0;
	//数组区间汇总
	while(i<n)	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]-1)
				count++;
			else
			{		
				if(max<count)
				{
					max=count;
					printf("%d->%d\n",a[i],a[j]);
				}
				count=1;
				max=1;
			}
		}
		i=j;
	}
	return 0;
} 
