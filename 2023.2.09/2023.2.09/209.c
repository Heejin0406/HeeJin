#include <stdio.h>
int main()
{
	float a, b, c;
	scanf("%f%f%f", &a, &b, &c);
	float sum = a + b + c;
	float avr = sum / 3;
	printf("%.2f %.2f\n", sum, avr);
	return 0;
}