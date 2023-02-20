#include<stdio.h>
int main()
{
	int n;
	for (n = 10000; n < 100000; n++)
	{
		int a, b, c, d;
		a = (n / 10000)*(n % 10000);
		b = (n / 1000)*(n % 1000);
		c = (n / 100)*(n % 100);
		d = (n / 10)*(n % 10);
		int m;
		m = a + b + c + d;
		if (m == n)
		{
			printf("%d ", n);
		}
	}
	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 10000; i<99999; i++)
//	{
//		int sum = 0;
//		for (j = 10; j <= 10000; j = 10 * j)
//		{
//			sum += (i / j)*(i%j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
