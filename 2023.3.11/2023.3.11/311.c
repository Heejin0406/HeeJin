#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n ; i++)
		{
			for (int j=0; j<n-i; j++)
			{
				printf(" ");
			}
			for (int k = 0; k < i + 1; k++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (int l = 0; l < n + 1; l++)
		{
			printf("* ");
		}
		printf("\n");
		for (int i1 = 0; i1 < n;i1++)
		{
			for (int j1=0; j1<i1+1; j1++)
			{
				printf(" ");
			}
			for (int k1 = 0; k1 < n-i1;k1++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}