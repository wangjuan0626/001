//结构体数组
#include <iostream>
using namespace std;
struct student{
	string name;
	int age;
	int score;
};
int main()
{
	struct student arr[3]={
		{"张三",19,98},
		{"李四",19,95},
		{"王五",18,96}
	};
	
	for(int i=0;i<3;i++)	
		cout << "姓名：" << arr[i].name << "\t年龄：" << arr[i].age << "\t分数：" << arr[i].score << endl; 
	system("pause");
	return 0;
} 
