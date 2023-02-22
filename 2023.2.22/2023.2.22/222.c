#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char n=0;
	int A = 0;
	int B = 0;
	while (scanf("%c",&n)!=EOF)
	{
		if (n == '0')
		{
			break;
		}
		else if (n == 'A')
		{
			A++;
		}
		else
		{
			B++;
		}
	}
	if (A > B)
	{
		printf("A\n");
	}
	else if (A < B)
	{
		printf("B\n");
	}
	else
	{
		printf("E\n");
	}
	return 0;
}