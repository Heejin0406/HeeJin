#include<stdio.h>
int add(x, y)
{
	int z = x + y;
}
int main()
{
	/*int a=0;
	int b=0;
	scanf_s("%d %d",&a,&b);
	int add = a + b;
	printf("%d\n", add);
	return  0;*/
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int c = add(a, b);
	printf("%d\n", c);
	return 0;
}

