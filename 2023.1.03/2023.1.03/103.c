#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int)); 
//	printf("%d\n", sizeof(long));
//	return 0;
//}
int main()
{
	int a;
	int b;
	int c;
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("c=%d\n", c);
	return 0;
}