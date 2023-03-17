#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 1; j < i+2; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
		}
	}
	return 0;
}