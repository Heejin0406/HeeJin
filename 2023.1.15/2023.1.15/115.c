#include<stdio.h>
int main()
{
	/*int i = 1;
	//在while循环中，break用于永久的终止循环
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d ", i);
		i++;
	}
	return 0;*/
	/*int i = 1;
	//在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分看是否执行下一次循环
	//输出结果为1 2 3 4 后面一直死循环
	while (i <= 10)
	{
		if (i == 5)
			continue;
		printf("%d ", i);
		i++;
	}
	return 0;*/
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF - end of file -文件结束标志
	{
		putchar(ch);               //putchar - 输出一个字符
	}                              //输入ctrl z - getchar读取结束
	return 0;
}