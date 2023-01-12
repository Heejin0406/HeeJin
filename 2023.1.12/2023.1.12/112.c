#include<stdio.h>
int main()
{
	/*int x=0;
	scanf_s("%d",&x);
	int y;
	y = x % 2;
	if (x%2== 1)
	{
		printf("ÊÇ\n");
	}
	else
	{
		printf("·ñ\n");
	}
	return 0;*/
	/*int x=1;
	while ( 100 >= x)
	{
		if (x % 2 == 1)
		{
			printf("%d ", x);
		}
		x++;
	}
	return 0;*/
	int x;
	for (x = 1; x <= 100; x++)
	{
		if (x % 2 == 1)
		{
			printf("%d ", x);
		}
	}
	return 0;
}