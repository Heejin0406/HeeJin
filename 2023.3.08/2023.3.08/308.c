#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i == 1 || i == n)
			{
				for (int j = 0; j < n; j++)
				{
					printf("* ");
				}
				printf("\n");
			}
			else
			{
				printf("* ");
				for (int k = 0; k < n - 2; k++)
				{
					printf("  ");
				}
				printf("* \n");
			}
		}
	}
	return 0;
}