#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int n, i, arr[20],j,k;
	while (~scanf("%d", &n))
	{
		for (i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
		scanf("%d",&j);
	/*	arr[n] = j;
		for (i = n - 1; i >= 0;i--)
		{
			if (arr[i + 1] < arr[i])
			{
				k = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = k;
			}
		}*/;
		for (i = 0; i < n+1; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}
//int main()
//{
//	int n;
//	int i;
//	int arr[100] = { 0 };
//	int j = 2;
//	int k = 0;
//	int l = 2;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i < n-1; i++)
//		{
//			for (l = 2; l<i+3; l++)
//			{
//				if (j>l&&j % l == 0)
//				{
//					k++;
//					arr[i] = '\0';
//				}
//			}
//			j++;
//		}
//		for (i = 0; i < n - 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//		printf("%d\n", k);
//	}
//	return 0;
//}