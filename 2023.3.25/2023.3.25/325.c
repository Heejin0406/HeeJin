#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	printf("I will learn C++ well!\n");
//	return 0;
//}
//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	printf("%d\n", (a + b - c)*d);
//	return 0;
//}
int main()
{
	int M;
	scanf("%d", &M);
	if (M % 5 == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}