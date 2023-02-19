#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float price = 0;
	int month= 0;
	int date = 0;
	int discount = 0; 
	scanf("%f%d%d%d", &price,&month, &date, &discount);
	float m = 0;
	if (month ==11&& date == 11)
	{
		m = price*0.7;
	}
	else if (month ==12&& date == 12)
	{
		m = price*0.8;
	}
	else
	{
		m = price;
	}
	if (discount == 1)
	{
		m = m - 50;
	}
	else
	{
		m = m;
	}
	if (m < 0)
	{
		printf("0.00\n");
	}
	else
	{
		printf("%.2f\n", m);
	}
	return 0;
}