//该三位数等于每位数的三次幂之和 
#include <iostream>
using namespace std;
int main()
{
	int num=100;
	int a=0;
	int b=0;
	int c=0;
	cout << "水仙花数：" << endl;
	do{
		a=num%10;//获取个位 
		b=num/10%10;//获取十位 
		c=num/100;//获取百位 
		if((a*a*a+b*b*b+c*c*c)==num)
			cout << num << endl;
		num++;
	}while(num<1000);
	system("pause");
	return 0;
}
