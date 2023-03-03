#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	double b;
	double c;
	while (scanf("%lf%lf%lf", &a, &b, &c) != EOF)
	{
		if (a ==0)
		{
			printf("Not quadratic equation\n");
		}
		else
		{
			double m = b*b - 4 * a*c;
			if (m ==0)
			{
				double x = (-b) / (2 * a);
				if (x == -0.00)
				{
					x = 0.00;
					printf("x1=x2=%.2lf\n", x);
				}
				else
				{
					printf("x1=x2=%.2lf\n", x);
				}
			}
			else if (m > 0)
			{
				double z = (-b - sqrt(m)) / (2 * a);
				double n = (-b + sqrt(m)) / (2 * a);
				if (z == -0.00 || n == -0.00)
				{
					z = 0.00;
					m = 0.00;
					printf("x1=%.2lf;x2=%.2lf\n", z, n);
				}
				else
				{
					printf("x1=%.2lf;x2=%.2lf\n", z, n);
				}
			}
			else
			{
				double x = (-b) / (2 * a);
				double y = (sqrt(-m)) / (2 * a);
				if (x == -0.00||y==-0.00)
				{
					x = 0.00;
					y = 0.00;
					printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x, y, x, y);
				}
				else
				{
					printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", x, y, x, y);
				}
			}
		}
	}
	return 0;
}