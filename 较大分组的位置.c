#include <stdio.h>
#include <string.h>
int main()
{
	char s[999];
	
	int i=0;
	while((s[i]=getchar())!='\n')
	{
		i++;
	}
	s[i]='\0';
	
	int n=strlen(s);
	
	//定义计数元素
	int count=1; 
	//定义最大元素
	int max=1;
	//定义起点
	int index=0; 
	
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[i+1])
		{
			count++;
			if(max<count)
			{
				max=count;
				index=i+1-count;
			}		
		}
		else
			count=1;
 	}
	if(max>=3)
		printf("[%d,%d]",index+1,max+index);
	else
		printf("[]");
	return 0;
}
