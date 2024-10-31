#include<stdio.h>
int main()
{
	int n, a;
	scanf_s("%d", &a);
	n = a;
	if (a % 2 == 1)
	{
		n = a * 3 + 1;
	}
	printf("%d", n);
	return 0;
}