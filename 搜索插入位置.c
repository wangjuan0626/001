#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n,target;
	printf("请输入一维数组长度：");
	scanf("%d",&n);
	
	//动态分配内存
	int *a;
	a=(int *)malloc(n*sizeof(int));
	
	printf("请按大小顺序输入数组元素：\n");
	
	for(int i=0;i<n;i++)
	{
			scanf("%d",&a[i]);
	}
	
	//寻找目标值 
	printf("请输入你要寻找的目标值：");
	scanf("%d",&target);
	
	for(int i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			printf("该目标值对应数组的索引是%d!\n",i);
			break;
		}
		else if(a[i]>target)
		{
			printf("该值在数组中不存在！其插入位置为%d!\n",i);
			break;
		}
		else if(a[n-1]<target)
		{
			printf("该值在数组中不存在！其插入位置为%d!\n",n);
			break;
		}
	}
	return 0;
}
