#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[20];
	printf("请输入:");
	scanf("%s",a);
	printf("请确定(确认请输入Y):");
	int b = getchar();
	while ((b = getchar()) != '\n');
	{
		;
	}
	if (b = 'Y')
	{
		printf("确认成功！\n");
	}
	else
	{
		printf("确认失败\n");
	}
	return 0;
}
