#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int m, n,i,j;
	int k = 0;
	int arr1[100][100] = { 0 };
	int arr2[100][100] = { 0 };
	scanf("%d%d", &m, &n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr1[i][j] == arr2[i][j])
			{
				k++;
			}
		}
	}
	printf("%.2f\n",100.0* k / (m*n));
	return 0;
}