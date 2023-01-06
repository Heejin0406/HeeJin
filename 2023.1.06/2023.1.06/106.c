#include<stdio.h>
int main()
{
	float a = 5 / 2.0;
	printf("除法:%f\n", a);//a=4.5......
	//int a = 5 / 2;
	//printf("%d\n", a);//a!=4.5
	int b = 5 % 2;
	printf("取余:%d\n",b);
	/*//>>、<<移位操作符，移动的是二进制位数
	int c = 2;
	int d = << c;//用不了？(d=4)
	printf("移位:%d\n", d);*/
	int e = 0;
	e += 3;//等价于e=e+3     减等同理:e -= 3 <=> e=e-3;模等%=，\=......
	printf("加等:%d\n", e);
	int f = 2;
	printf("非(逻辑取反):%d\n", !f);//0为假，非0为真=>如果f=0，则!f=1,否则!f=0;
	/*if (a)
	{
		如果a为真......;
	}
	else //!a
	{
		如果a为假......;
	}*/
	int g = 1;
	int arr[10] = { 1,2};
	printf("数据类型大小:%d\n", sizeof(int));//int 占4个字节
	printf("变量大小:%d\n", sizeof g);//整形元素大小为4个字节
	printf("数组大小:%d\n", sizeof(arr));//计算数组的总大小，arr是int类型4个字节，分配的十个元素空间=>10*4=40
	printf("数组元素大小:%d\n", sizeof(arr[0]));//单个元素所占大小
	int num = sizeof(arr) / sizeof(arr[0]);//数组总大小/单个元素大小=元素个数
	printf("数组元素个数:%d\n", num); 
	return 0;
}