#include<stdio.h>
//结构体创建新的类型:information
struct information//个人信息
{
	char name[10]; //姓名
	int age;       //年龄
	char gender[4];//性别
	float weight;  //体重
};
int main()
{
	//结构体的创建和初始化:
	struct information a = { "张三", 19, "男", 51.5 };
	printf("1:姓名:%s\n年龄:%d\n性别:%s\n体重:%f\n\n", a.name, a.age, a.gender, a.weight);//“ . ”操作符的使用:结构体变量.结构体成员变量
	//结构体指针的使用(advanced?):
	struct information *pa = &a;
	printf("2:姓名:%s\n年龄:%d\n性别:%s\n体重:%f\n\n", (*pa).name, (*pa).age, (*pa).gender, (*pa).weight);//注意指针变量加括号!
    //结构体指针的使用(more advanced?):
	printf("3:姓名:%s\n年龄:%d\n性别:%s\n体重:%f\n", pa->name, pa->age, pa->gender, pa->weight);//" -> "操作符的使用:结构体指针->结构体成员变量
	return 0;
}