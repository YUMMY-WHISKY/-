#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, a;
	int s = 0;
	int all = 1;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		all *= a;
		s += all;
	}
		printf("%d", s);

	return 0;
}