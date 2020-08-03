#include <stdio.h>
int f(int n)
{
	int m;
	if(n==0)
		m=0;
	else if(n==1)
		m=1;
	else
		m=f(n-1)+f(n-2);
	return m;
} 
int main()
{
	int n,s;
	printf("请输入n值(n>1):");
	scanf("%d",&n);
	s=f(n-1)+f(n-2);
	printf("f(%d)=%d\n",n,s);
	return 0;
}
