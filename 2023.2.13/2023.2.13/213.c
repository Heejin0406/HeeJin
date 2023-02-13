#include <stdio.h>
int main()
{
	float r = 0;
	scanf("%f", &r);
	double V = 0;
	V = (4.0*3.1415926*r*r*r) / 3.0;
	printf("%.3f\n", V);
	return 0;
}