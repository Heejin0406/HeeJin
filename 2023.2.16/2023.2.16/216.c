#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char n;
	scanf("%c", &n);
	if (n >= 'A' && n <= 'z')
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}