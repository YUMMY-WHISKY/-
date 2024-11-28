#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Findmax(int arr[],int n)
{
	if (n == 1)
		return arr[0];
	else
	{
		int max = Findmax(arr, n - 1);
		return arr[n-1] > max ? arr[n - 1] : max;
	}
} 