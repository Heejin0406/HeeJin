#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	int i;
	int j;
	int k = 0;
	int arr[100] = { 0 };
	while (~scanf("%d", &n))
	{
		for (i = 2; i <= n; i++)
		{
			arr[i] = i;
		}
		for (i = 2; i <= n; i++)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					arr[i] = 0;
				}
			}
		}
		for (i = 2; i <= n; i++)
		{
			if (arr[i] != 0)
			{
				printf("%d ", arr[i]);
			}
			else
			{
				k++;
			}
		}
		printf("\n%d\n", k);
	}
	return 0;
}