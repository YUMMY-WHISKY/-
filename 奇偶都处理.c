#include<stdio.h>
int main()
{
	while (1)
	{
	int n,a;	
		scanf_s("%d", &a);
		if (a % 2 == 0)
			n = a / 2;
		else
			n = a * 3 + 1;
		printf("%d\n", n);		
	}
	return 0;
}
