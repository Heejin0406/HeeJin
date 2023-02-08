#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	float circumference = a + b + c;
	float q = circumference / 2;
	float area = sqrt(q*(q - a)*(q - b)*(q - c));
	printf("circumference=%.2f area=%.2f\n", circumference, area);
	return 0;
}