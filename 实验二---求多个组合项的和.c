#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, s;
	int result=1;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		result *= 2;
		s += result;
	}	
	return 0;
}