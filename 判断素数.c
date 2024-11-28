#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Ismrime(int n)
{
	int i;
	if (n <= 1)
		return 0;
	for (i = 2; i * i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

