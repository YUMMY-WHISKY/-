#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, k, m;
	for (k = 0, i = 5; i <= 1000; i += 5)
	{
		m = i;
		while (m % 5 == 0)
		{
			k++;
			m/=5;
		}
	}
	printf("%d ", k);
	return 0;
}