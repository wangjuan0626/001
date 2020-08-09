//有两种特殊字符：第一种可以用一比特0来表示；另一种可以用两比特10或11表示
//给定字符串总是以0结束 
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	printf("请输入数组长度：");
	scanf("%d",&n);
	
	int *a;
	//动态分配内存
	a=(int *)malloc(n*sizeof(int));
	
	printf("请输入数组元素:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	//给i赋初值
	i=0; 
	//定义判断标志
	int flag=0; 
	while(i<n)
	{
		//出现1只能和其后面的数字搭配 
		if(a[i]==1)
			i=i+2;
		else if(a[i]==0)
			i++;
		if(i==n-1 && a[i]==0)
			flag=1;
	}
	if(flag==1)
		printf("ture!\n");
	else
		printf("false!\n");
	return 0;		 
}
