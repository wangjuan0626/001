//猜数字
//系统生成随机数 
//玩家进行猜测
//判断玩家猜测
//猜对，退出游戏
//猜错，提示结果偏大或者偏小，返回前几步 
#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main()
{
	//添加随机数的种子：利用当前系统的时间生成随机数，防止每次随机数都一样 
	srand((unsigned int)time(NULL));
	int num = rand() % 100+1;
	int val=0;
	while(1)
	{
		cout << "请输入猜测数字：";
		cin >> val;
		if(val>num)
			cout << "您猜测的数字过大！请再次输入数字：" << val << endl; 
		else if(val<num)
			cout << "您输入的数字过小！请再次输入数字：" << val << endl;
		else if(val==num)
		{
			cout << "恭喜！猜测正确！" << endl;
			break; 
		}
	}
	system("pause");
	return 0;
} 
