#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, sum, chengji,gewei;
	for (i = 1; i <= 100; i++)
	{
		sum = 0, chengji = 1;
		int num = i;
		while (num > 0)
		{		
			gewei = num % 10;
			sum += gewei;
			chengji *= gewei;
			num /= 10;
		}
		if (chengji > sum)
			printf("%d ", i);
	}
	return 0;
}