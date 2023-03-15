#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
		if (0 <= n&&n < 4)
		{
			printf("Good\n");
		}
		else if (3 < n&&n < 10)
		{
			printf("Danger\n");
		}
		else if (9 < n)
		{
			printf("Danger++\n");
		}
	return 0;
}