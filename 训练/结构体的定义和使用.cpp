#include <iostream>
#include <string>
using namespace std;
struct student{
	string name;
	int age;
	int score;
}s3;
int main()
{
	/*struct*/student s1,s2;
	
	s1={"张三",19,98};
	cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t分数：" << s1.score << endl; 
	
	s2.name="李四";
	s2.age=18;
	s2.score=95;
	cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t分数：" << s2.score << endl;
	
	s3.name="王五";
	s3.age=19;
	s3.score=98;
	cout << "姓名：" << s3.name << "\t年龄：" << s3.age << "\t分数：" << s3.score << endl; 
	system("pause");
	return 0;
}
