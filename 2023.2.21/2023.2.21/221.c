//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//		for (j = 1; j < n + 1; j++)
//		{
//			while (i < n)
//			{
//				if (arr[i] <= arr[j])
//				{
//					arr[i] = arr[j];
//					i++;
//				}
//			}
//			printf("%d ", arr[i]);
//		}
//	return 0;
//}
#include<stdio.h>
int main() {
	int arr[40] = { 0 };
	int num = 0;
	scanf("%d", &num);//���뼸��
	for (int k = 0; k <= num; k++) {//����ɼ�
		scanf("%d", &arr[k]);
	}
	int temp = 0;
	for (int i = 0; i < num; i++) {//��iλΪ�����
		for (int j = i + 1; j<num; j++) {//�ӵ�i+1λ��ʼ����ʣ����
			if (arr[j] > arr[i]) {//���ڴ������������
				temp = arr[i];//��������ͱȽ������н���
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
	for (int k = 0; k < 5; k++)
		printf("%d ", arr[k]);

	return 0;
}