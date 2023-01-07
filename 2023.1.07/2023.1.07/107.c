#include<stdio.h>
//define是一个预处理指令
/*1.define定义符号
#define MAX 100
int main()
{
	printf("%d\n", MAX);
	return 0;
}*/
//2.define定义宏
#define ADD(x,y) x+y//将ADD(x,y)替换为x+y；ADD(x,y) ((x),(y))
int main()
{
	printf("%d\n",ADD(2, 3));
	printf("%d\n", 4 * ADD(2, 3));//此时相当于替换为了4*2+3=11，所以要达成自己的要求是注意括号
	return 0;
}