#include <stdio.h>
int main()
{
	int weight = 0;
	float height = 0;
	scanf("%d%f", &weight, &height);
	float bmi = 0;
	bmi = weight / ((height / 100)*(height / 100));
	printf("%.2f\n", bmi);
	return 0;
}