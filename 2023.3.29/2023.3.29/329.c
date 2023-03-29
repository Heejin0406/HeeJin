#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	while (~scanf("%d",&n))
	{
	    int i = 0;
		for ( i = 1; i <= n; i++)
		{
			int j = 0;
			int flag = 1;
			for ( j = 2; j < i; j++)
			{
				if (i%j == 0)
				{
					flag = 0;
					break;
				}
			}
			if ( flag==1)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}
int a(x)
{
	for (int j = 2; j <= x; j++)
		{
			if (x%j == 0)
				{
					break;
				}
		}
			if ( x==1)
				{
				return 1;
				}
}
int main()
{
	int n;
	while (~scanf("%d", &n))
	{
		if (a(n) == 1)
		{
			printf("%d是质数\n", n);
		}
		else
		{
			printf("%d不是质数\n", n);
		}
	}
return 0；
}