#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double f(double x)
{
	return sin(x);
}
double Sum(double a, double b, int n)
{
	double h = (b - a) / n;
	double sum = 0.0;
	int i;
	for (i = 0; i < n; i++)
	{
		double x = a + i * h + h / 2;
		sum += f(x) * h;
	}
	return sum;
}