#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int arr[6] = { 0 };
	while (scanf("%d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6]) != EOF)
	{
		double sum;
		sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6];
		double max;
		double mini;
		max = arr[0];
		mini = arr[0];
		for (i = 0; i<7; i++)
		{
			if (arr[i]>max)
			{
				max = arr[i];
			}
		}
		for (i = 0; i<7; i++)
		{
			if (arr[i]<mini)
			{
				mini = arr[i];
			}
		}
		double avg;
		avg = (sum - max - mini) / 5;
		printf("%.2f\n", avg);
		/*printf("%d %d", max, mini);*/
	}
	return 0;
}