#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=1,p=1;
	scanf("%d", &n);
	if (n < 0)
	{
		printf("你数学是体育老师教的吗");
		exit(0);
	}
	for (i = 2;i <= n;i++)
	{
		p = p * i;
		sum = sum + p;
	}
	printf("阶乘的和为：%d", sum);
	system("pause");
	return 0;
}