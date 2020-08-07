#include <iostream>
using namespace std;
int main()
{
	int a=0;
	int b=0;
	for(int i=1;i<=100;i++)
	{
		a=i%10;//求个位数
		b=i/10%10;//求十位数
		if(a==7 || b==7)
			cout << i << endl;
		else if(i%7==0)
			cout << i << endl;
	}
	system("pause");
	return 0;
}
