#include<stdio.h>
int main()
{
	int M;
	scanf_s("%d", &M);
	int a = M % 5;
	if (a == 0)//ע����" == "!!!����" = "!!!
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}