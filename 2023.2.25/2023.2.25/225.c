#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d",&n) != EOF)
	{
		if (90 <= n && 100 >=n)
		{
			printf("Perfect\n");
		}
	}
	return 0;
}