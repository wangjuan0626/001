#include <iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout << "请分别输入三只小猪的体重：";
	cin >> a;
	cin >> b;
	cin >> c;
	//判断a和b的体重大小
	if(a>b)
	{
		if(a>c)
			cout << "最重的小猪是a!" << endl;
		else
			cout << "最重的小猪是c!" << endl; 
	} 
	else
	{
		if(b>c)
			cout << "最重的小猪是b!" << endl;
		else
			cout << "最重的小猪是c!" << endl;
	}
	system("pause");
	return 0;
}
