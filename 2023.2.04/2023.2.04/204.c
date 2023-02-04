#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = a / b;
	int d = a%b;
	printf("%d %d\n", c,d);
	return 0;
}*/
int main()
{
	int a=0;
	scanf("%d", &a);
	printf("%d%d%d%d\n",a% 10,(a / 10) % 10, (a / 100) % 10,(a/1000) % 10);
	return 0;
}