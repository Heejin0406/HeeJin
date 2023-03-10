#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j=n-i-1; j > 0; j--)
			{
				printf(" ");
			}
			printf("*\n");
		}
	}
	return 0;
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int m = n % 2;
		if (m == 1)
		{
			for (int i = 0; i < n / 2; i++)
			{
				for (int j = 0; j < i; j++)
				{
					printf(" ");
				}
				printf("*");
				for (int k = 0; k < n - 2 * i - 2; k++)
				{
					printf(" ");
				}
				printf("*\n");
			}
			for (int l = 0; l < n / 2; l++)
			{
				printf(" ");
			}
			printf("*\n");
			for (int i1 = 0; i1 < n / 2; i1++)
			{
				for (int j1 = 0; j1 < (n - 2 * i1) / 2-1; j1++)
				{
					printf(" ");
				}
				printf("*");
				for (int k1 = 0; k1 < 2 * i1 + 1; k1++)
				{
					printf(" ");
				}
				printf("*\n");
			}
		}
		else
		{
			for (int i2 = 0; i2 < n / 2; i2++)
			{
				for (int j2 = 0; j2 < i2; j2++)
				{
					printf(" ");
				}
				printf("*");
				for (int k2 = 0; k2 < n - 2 * i2 - 2; k2++)
				{
					printf(" ");
				}
				printf("*\n");
			}
			for (int i3 = 0; i3 < n / 2; i3++)
			{
				for (int j3 = 0; j3 < n / 2 - i3-1; j3++)
				{
					printf(" ");
				}
				printf("*");
				for (int k3 = 0; k3 < 2 * i3; k3++)
				{
					printf(" ");
				}
				printf("*\n");
			}
		}
	}
	return 0;
}