#include <stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = a / 3600;
	int c = (a % 3600) / 60;
	printf("%d %d %d\n", b, c, a - 3600 * b - 60 * c);
	return 0;
}