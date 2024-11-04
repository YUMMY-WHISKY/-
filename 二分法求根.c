#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fx(float x);
float fx(float x)
{
	return 2 * x * x * x - 4 * x * x + 3 * x - 6;
}
int main()
{	
	float left = -10, right = 10;
	float mid, rol=0.001;

	while ((right - left >= rol))
	{
		mid = left + (right - left) / 2;

		if (fx(mid) == 0)
			break;
		else if (fx(left) * fx(mid) < 0)
			right = mid;
		else
			left = mid;
	}
	printf("%.5f", mid);
	return 0;
}