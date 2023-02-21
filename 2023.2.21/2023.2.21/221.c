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
	scanf("%d", &num);//输入几名
	for (int k = 0; k <= num; k++) {//输入成绩
		scanf("%d", &arr[k]);
	}
	int temp = 0;
	for (int i = 0; i < num; i++) {//第i位为最大数
		for (int j = i + 1; j<num; j++) {//从第i+1位开始遍历剩余数
			if (arr[j] > arr[i]) {//存在大于最大数的数
				temp = arr[i];//把最大数和比较数进行交换
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
	for (int k = 0; k < 5; k++)
		printf("%d ", arr[k]);

	return 0;
}