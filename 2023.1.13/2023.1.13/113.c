#include<stdio.h>
int main()
{
	int day;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
		printf("Monday\n");
	case 2:
		printf("Tuesday\n");
	case 3:
		printf("wednesday\n");
	case 4:
		printf("thursday\n");
	case 5:
		printf("frida\n");
	case 6:
		printf("Saturday\n");
	case 7:
		printf("Sunday\n");
	}
	return 0;
}