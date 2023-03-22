#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char arr1[100];
	char arr2[100];
	int a, b;
	while (~scanf("%s%s", &arr1, &arr2))
	{
		if (arr1[0] == 'a'&& arr1[1] == 'd'&& arr1[2] == 'm'&& arr1[3] == 'i'&& arr1[4] == 'n')
		{
			a = 1;
		}
		if (arr2[0] == 'a'&& arr2[1] == 'd'&& arr2[2] == 'm'&& arr2[3] == 'i'&& arr2[4] == 'n')
		{
			b = 1;
		}
		if (a == 1 && b == 1)
		{
			printf("Login Success!\n");
		}
		else
		{
			printf("Login Fail!\n");
		}
	}
	return 0;
}