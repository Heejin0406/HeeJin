#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d", &x);
	if (x < 0)
	{
		y = 1;
	}
	else if (x == 0)
	{
		y = 0;
	}
	else
	{
		y = -1;
	}
	printf("%d\n", y);
	return 0;
}
int main()
{
	int i;
	int n = 0;
	for (i = 1; i <= 2019; i++)
	{
		if ((i % 1000)/100 == 9)
		{
			n++;
		}
		else if ((i % 100) / 10 == 9)
		{
			n++;
		}
		else if (i % 10 == 9)
		{
			n++;
		}
	}
	printf("%d\n", n);
	return 0;
}