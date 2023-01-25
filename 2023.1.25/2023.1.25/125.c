#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int m = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	//int mid = (left + right) / 2;
	//int z = right - left;
	//printf("%d\n", arr[right]);
	while (left<=right)
{
	int mid = (left + right) / 2;
	if (m < arr[mid])
	{
		right = mid - 1;
	}
	else if (m>arr[mid])
	{
		left = mid + 1;
	}
	else
	{
		printf("%d\n", mid);
		break;
	}
}
	return 0;
}