#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int fibonacci1(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci1(n - 1) + fibonacci1(n - 2);
}
int fibonacci2(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	int a = 0, b = 1, fib = 0;
	int i;
	for (i = 2; i <= n; i++)
	{
		fib = a + b;
		a = b;
		b = fib;
	}
	return fib;
}
int main()
{
	int n = 9;
	printf("µÝ¹é£ºfibonacci=%d\n", fibonacci1(n));
	printf("·ÇµÝ¹é:fibonacci=%d", fibonacci2(n));
	return 0;
}