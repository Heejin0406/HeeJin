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
		printf("����������(ʣ�����%d):",a);
		scanf("%s", password2);
		//if (password2[20] == password[20])//err--�����ַ����Ƚϲ���ʹ��==,Ӧʹ��strcmp
		if(strcmp(password,password2)==0)
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
     }
	if (i == 3)
	{
		printf("������������������Ժ�����\n");
	}
	return 0;
}