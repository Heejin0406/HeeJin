#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a, b;
//	while (scanf("%d%d", &a, &b) != EOF)
//	{
//		int m = a % 4;
//		    if (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12)
//			{
//				printf("31\n");
//			}
//			else if (b == 4 || b == 6 || b == 9 || b == 11)
//			{
//				printf("30\n");
//			}
//			else if (b == 2)
//			{
//				if (m == 0)
//				{
//					printf("29\n");
//				}
//				else
//				{
//					printf("28\n");
//				}
//			}
//	}
//	return 0;
//}
//int main()
//{
//	double a, c;
//	char b;
//	scanf("%lf%c%lf", &a, &b, &c);
//	if (b != '+'&&b != '-'&&b != '*'&&b != '/')
//	{
//		printf("Invalid operation!\n");
//	}
//	else
//	{
//		if (b == '/')
//		{
//			if (c == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf%c%.4lf=%.4lf\n", a, b, c, a / c);
//			}
//		}
//		else if (b == '+')
//		{
//			printf("%.4lf%c%.4lf=%.4lf\n", a, b, c, a + c);
//		}
//		else if (b == '-')
//		{
//			printf("%.4lf%c%.4lf=%.4lf\n", a, b, c, a - c);
//		}
//		else
//		{
//			printf("%.4lf%c%.4lf=%.4lf\n", a, b, c, a * c);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int n;
//	while (scanf("%d",&n)!=EOF)
//	{
//		for (int i = 0; i <n; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}