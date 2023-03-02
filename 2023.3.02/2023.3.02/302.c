#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d%d%d", &a, &b, &c) != EOF)
//	{
//		if (a + b > c&&a + c > b&&b + c > a)
//		{
//			if (a==b&&b==c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if (a == b || a == c || b == c)
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}
int main()
{
	float a;
	float b;
    while (scanf("%f%f", &a, &b) != EOF)
	{
		b = b / 100;
		float m;
	    m = a / (b*b);
		if (m < 18.5)
		{
			printf("Underweight\n");
		}
		else if (m >= 18.5&&m <= 23.9)
		{
			printf("Normal\n");
		}
		else if (m>23.9&&m <= 27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}
	return 0;
}