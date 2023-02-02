#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*int main()
{
	char n=0;
	scanf("%c", &n);
	printf("    %c\n", n);
	printf("   %c %c\n", n, n);
	printf("  %c %c %c\n", n, n, n);
	printf(" %c %c %c %c\n",n, n, n, n);
	printf("%c %c %c %c %c\n",n, n, n, n, n);
	return 0;
}*/
int main()
{
	char arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
	int a = sizeof(arr);
	int i = 0;
	for (i = 0; i < a; i++)
	{
		printf("%c", arr[i]);
	}
	return 0;
}