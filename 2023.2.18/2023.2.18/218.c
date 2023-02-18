#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float weight = 0;
	float height = 0;
	scanf("%f%f", &weight, &height);
	float BMI;
	BMI = weight / (height*height);
	if (18.5 < BMI && BMI< 23.9)
	{
		printf("Normal\n");
	}
	else
	{
		printf("Abnormal\n");
	}
	return 0;
}