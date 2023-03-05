#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//			for (int i=1;i<=n;i++)
//			{
//				for (int a = 0; a < i; a++)
//				{
//					printf("* ");
//				}
//				printf("\n");
//			}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (n; n > 0; n--)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, j, k;
//		for (k = 0; k<n; k++)
//		{
//			for (i=0; i <n-k-1; i++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n-i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//		return 0;
//}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int i, j, k;
		for (k = n; k>0; k--)
		{
			for (i = 0; i <n - k; i++)
			{
				printf(" ");
			}
			for (j = 0; j < k ; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}