#include<stdio.h>
int main()
{
	/*int i = 1;
	//��whileѭ���У�break�������õ���ֹѭ��
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;*/
	/*int i = 1;
	//��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��ֿ��Ƿ�ִ����һ��ѭ��
	//������Ϊ1 2 3 4 ����һֱ��ѭ��
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;*/
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF - end of file -�ļ�������־
	{
		putchar(ch);               //putchar - ���һ���ַ�
	}                              //����ctrl z - getchar��ȡ����
	return 0;
}