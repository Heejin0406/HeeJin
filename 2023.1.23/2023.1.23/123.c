#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	int b;
	int c=1;
	scanf("%d", &b);
	for (a=1; a<=b ; a++)
	{
		 c = a*c;
	}
	printf("%d\n", c);
	return 0;
}