#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0; 
	int c = 1;
	int d = 0;
	int i = 1;
	int n = 1;
	//scanf("%d", &n);
	for (n = 1; n <= 10; n++)
	{
		c = 1;//����n�Ľ׳�ǰҪ��ʼ��Ϊ1
		for (i = 1; i <= n; i++)
		{
			c *= i;
		}
		d += c;
	}
	printf("%d\n", d);
	return 0;
}