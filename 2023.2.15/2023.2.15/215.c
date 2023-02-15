#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int add = 0;
	scanf("%x%o", &a, &b);
	add = a + b;
	printf("%d\n", add);
	return 0;
}