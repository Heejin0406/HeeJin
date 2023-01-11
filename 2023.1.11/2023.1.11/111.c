#include<stdio.h>
int main()
{
	int a=20;
	if (a < 18)
		printf("child");
	else if (a >= 18 && a < 26)
		printf("young");
	else if (a >= 26 && a < 60)
		printf("middle age");
	else
		printf("old");
	return 0;
}