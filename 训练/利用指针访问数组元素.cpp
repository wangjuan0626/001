//利用指针访问数组元素 
#include <iostream> 
using namespace std;
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	
	int *p=arr;//arr为数组的首地址
	
	for(int i=0;i<10;i++)
	{
		cout << "利用指针访问数组的第" << i << "个元素：" << *p << endl;
		p++;
	}
	 
	 
	cout << "利用指针遍历数组元素：" << endl;
	for(int *p2=arr;p2<&arr[10];p2++)
		cout << *p2 << endl;
	system("pause");
	return 0;
}
