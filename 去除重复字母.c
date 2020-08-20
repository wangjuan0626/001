#include <stdio.h>
#include <string.h>
int main()
{
	char a[999];
	int i=0;
	while((a[i]=getchar())!='\n')
		i++;
	a[i]='\0';
	
	//计算字符串数组长度
	int n=strlen(a);
	
	//比较字符串大小
	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(a[j]>a[j+1])
			{
				char temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
			 
	int index=0;
	//删除重复元素
	for(int i=0;i<n;i++)
		if(a[i]!=a[i+1])
			a[index++]=a[i];
			
	a[i]='\0';
	
	for(int i=0;i<index;i++)
		printf("%c",a[i]);
	return 0;
} 
