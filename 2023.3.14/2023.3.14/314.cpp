#include<stdio.h>
int main()
{
	double sum = 0.0;
	for (int n = 0; n < 5; n++)
	{
		double a;
		scanf("%lf", &a);
		sum = sum + a;
	}
	double avg = sum / 5;
	printf("%.2lf", avg);
	return 0;
}
int main()
{
	double a, b, c, d, e;
	scanf("%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e);
	double f = (a + b + c + d + e) / 5;
	printf("%.2lf\n", f);
	return 0;
}