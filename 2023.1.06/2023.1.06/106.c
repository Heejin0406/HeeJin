#include<stdio.h>
int main()
{
	float a = 5 / 2.0;
	printf("����:%f\n", a);//a=4.5......
	//int a = 5 / 2;
	//printf("%d\n", a);//a!=4.5
	int b = 5 % 2;
	printf("ȡ��:%d\n",b);
	/*//>>��<<��λ���������ƶ����Ƕ�����λ��
	int c = 2;
	int d = << c;//�ò��ˣ�(d=4)
	printf("��λ:%d\n", d);*/
	int e = 0;
	e += 3;//�ȼ���e=e+3     ����ͬ��:e -= 3 <=> e=e-3;ģ��%=��\=......
	printf("�ӵ�:%d\n", e);
	int f = 2;
	printf("��(�߼�ȡ��):%d\n", !f);//0Ϊ�٣���0Ϊ��=>���f=0����!f=1,����!f=0;
	/*if (a)
	{
		���aΪ��......;
	}
	else //!a
	{
		���aΪ��......;
	}*/
	int g = 1;
	int arr[10] = { 1,2};
	printf("�������ʹ�С:%d\n", sizeof(int));//int ռ4���ֽ�
	printf("������С:%d\n", sizeof g);//����Ԫ�ش�СΪ4���ֽ�
	printf("�����С:%d\n", sizeof(arr));//����������ܴ�С��arr��int����4���ֽڣ������ʮ��Ԫ�ؿռ�=>10*4=40
	printf("����Ԫ�ش�С:%d\n", sizeof(arr[0]));//����Ԫ����ռ��С
	int num = sizeof(arr) / sizeof(arr[0]);//�����ܴ�С/����Ԫ�ش�С=Ԫ�ظ���
	printf("����Ԫ�ظ���:%d\n", num); 
	return 0;
}