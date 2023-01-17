#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char password[20] = { 0 };
	printf("请输入密码:");
	scanf("%s", &password);
	getchar();
	printf("确定吗?(请输入Y/N)");
	//getchar();
	int ch = getchar();
	if (ch == 'Y')
	{
	printf("确认成功\n");
	}
	else
	{
	printf("确认失败\n");
	}
	return 0;
}