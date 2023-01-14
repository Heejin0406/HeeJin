#include<stdio.h>
int main()
{
	/*int day;
	scanf_s("%d", &day);
	//没有break会从输入的情况一直执行到最后指令
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
	}*/
	
	/*int day;
	scanf_s("%d", &day);
	//有break就会一直执行到break前的那条指令情况
	switch (day)
	{
	case 1:
		printf("Monday\n");
	    break;
	case 2:
		printf("Tuesday\n");
	    break;
	case 3:
		printf("wednesday\n");
	    break;
	case 4:
		printf("thursday\n");
	    break;
	case 5:
		printf("friday\n");
	    break;
	case 6:
		printf("Saturday\n");
	    break;
	case 7:
	    printf("Sunday\n");
		break;
	}
	return 0;*/
	/*int day;
	scanf_s("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
    case 3:
    case 4:
	case 5:
	    printf("Work\n");
	    break;
	case 6:
	case 7:
	    printf("Weekend\n");
	    break;
	default://其他选项
		printf("error\n");
		break;
	}
	return 0;*/
	int n = 1;
	int m = 2;
	switch (n)
	{                      //n=1
	case 1:
		m++;               //m=3
	case 2:
		n++;               //n=2
	case 3:
		switch (n)
		{//switch可以嵌套使用
			               //n=2
		case 1:
			n++;           //n=3
		case 2:
			m++, n++;      //m=4,n=3
			break;
		}
	case 4:
		m++;               //m=5
		break;
	default:
		break;
	}
	printf("m=%d,n=%d\n", m, n);
	return 0;
	}