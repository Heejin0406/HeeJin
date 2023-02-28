#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char n;
	while (scanf("%c",&n) != EOF)
	{
		if (n == '\n')
		{
			continue;
		}
		else if ('A' <= n&&n <= 'Z')
		{
			n += 32;
		}
		else if ('a' <=n&&n <= 'z')
		{
			n -= 32;
		}
		printf("%c\n", n);
	}
	return 0;
}