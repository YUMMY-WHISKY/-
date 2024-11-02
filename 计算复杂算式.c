#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int k;
	double s = 0;
	for (k = 1; k <= 100; k++)
		s += k;
	for (k = 1; k <= 50; k++)
		s += k * k;
	for (k = 1; k <= 10; k++)
		s += 1 /(double)k;
	printf("%lf", s);
	return 0;
}