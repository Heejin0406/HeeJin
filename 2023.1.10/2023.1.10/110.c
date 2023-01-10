#include<stdio.h>
/*int a, b;
int main()
{
	scanf_s("%d %d", &a, &b);
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return 0;
}*/
//用函数的方式写
int Bigger(x,y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int c = Bigger(a, b);
	printf("%d\n", c);
	return 0;
}