#include<stdio.h>
//define��һ��Ԥ����ָ��
/*1.define�������
#define MAX 100
int main()
{
	printf("%d\n", MAX);
	return 0;
}*/
//2.define�����
#define ADD(x,y) x+y//��ADD(x,y)�滻Ϊx+y��ADD(x,y) ((x),(y))
int main()
{
	printf("%d\n",ADD(2, 3));
	printf("%d\n", 4 * ADD(2, 3));//��ʱ�൱���滻Ϊ��4*2+3=11������Ҫ����Լ���Ҫ����ע������
	return 0;
}