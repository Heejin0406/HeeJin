#include<stdio.h>
//�ṹ�崴���µ�����:information
struct information//������Ϣ
{
	char name[10]; //����
	int age;       //����
	char gender[4];//�Ա�
	float weight;  //����
};
int main()
{
	//�ṹ��Ĵ����ͳ�ʼ��:
	struct information a = { "����", 19, "��", 51.5 };
	printf("1:����:%s\n����:%d\n�Ա�:%s\n����:%f\n\n", a.name, a.age, a.gender, a.weight);//�� . ����������ʹ��:�ṹ�����.�ṹ���Ա����
	//�ṹ��ָ���ʹ��(advanced?):
	struct information *pa = &a;
	printf("2:����:%s\n����:%d\n�Ա�:%s\n����:%f\n\n", (*pa).name, (*pa).age, (*pa).gender, (*pa).weight);//ע��ָ�����������!
    //�ṹ��ָ���ʹ��(more advanced?):
	printf("3:����:%s\n����:%d\n�Ա�:%s\n����:%f\n", pa->name, pa->age, pa->gender, pa->weight);//" -> "��������ʹ��:�ṹ��ָ��->�ṹ���Ա����
	return 0;
}