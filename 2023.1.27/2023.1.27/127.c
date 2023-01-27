#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int a = 0;
	char password[20] = { "123456789" };
	char password2[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		a = 3 - i;
		printf("请输入密码(剩余次数%d):",a);
		scanf("%s", password2);
		//if (password2[20] == password[20])//err--两个字符串比较不能使用==,应使用strcmp
		if(strcmp(password,password2)==0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
     }
	if (i == 3)
	{
		printf("密码输入次数过多请稍后再试\n");
	}
	return 0;
}