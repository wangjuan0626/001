#include <stdio.h>
int main()
{
	int nums[]={-2,0,3,-5,2,-1};//*给定整数数组*//
	int i,j,sum;//*定义数组的两个下标以及所求和*// 
	printf("Enter i and j(0<=i<=j<6):");//*提示输入i,j的值*//
	scanf("%d %d",&i,&j);
	sum=0;//*给sum赋初值，避免程序输出错误*//
	for(int k=i;k<=j;k++)//*定义变量k，使其等于i值，建立循环，从nums[i]计算到nums[j]*//
			sum+=nums[k];//*将从i起的每一项相加，直至加到第j项，循环结束*//	
	printf("%d\n",sum);//*输出sum值*//
	return 0; 
}
