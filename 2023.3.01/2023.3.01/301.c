#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a= 0;
//	int b=0;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		if (a > b)
//		{
//			printf("%d>%d\n", a, b);
//		}
//		else if (a==b)
//		{
//			printf("%d=%d\n", a, b);
//		}
//		else
//		{
//			printf("%d<%d\n", a, b);
//		}
//	}
//	return 0;
//}
int main()
{
	int t = 0;
	while (scanf("%d", &t) != EOF)
	{
		if (t > 0)
		{
			printf("1\n");
		}
		else if (t == 0)
		{
			printf("0.5\n");
		}
		else
		{
			printf("0\n");
		}
	}
	return 0;
}