#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//		{
//			printf("Fail\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int m;
//		m = n % 2;
//		if (m == 1)
//		{
//			printf("Odd\n");
//		}
//		else
//		{
//			printf("Even\n");
//		}
//	}
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int m = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a >= b&&a>=c)
	{
		m = a;
	}
	else if (b >= a&&b >= c)
	{
		m = b;
	}
	else if (c >= a&&c >= b)
	{
		m = c;
	}
	printf("%d\n", m);
	return 0;
}