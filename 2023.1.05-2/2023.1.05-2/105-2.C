#include<stdio.h>
int main()
{
	int shuzu[5] = { 1, 2, 3, 4, 5 };
	int i;
	printf("«Î ‰»Î(i<5):\n");
	scanf_s("%d", &i);
	if (i > 5)
		printf("error\n");
	else
	{
		printf("%d\n\n", shuzu[i]);
		while (i < 5)
		{
			printf("%d ", shuzu[i]);
			i++;
		}
	}
	return 0;
}