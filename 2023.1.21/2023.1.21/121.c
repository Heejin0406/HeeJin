#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[20];
	printf("������:");
	scanf("%s",a);
	printf("��ȷ��(ȷ��������Y):");
	int b = getchar();
	while ((b = getchar()) != '\n');
	{
		;
	}
	if (b = 'Y')
	{
		printf("ȷ�ϳɹ���\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}
