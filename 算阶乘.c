#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,sum=1,p=1;
	scanf("%d", &n);
	if (n < 0)
	{
		printf("����ѧ��������ʦ�̵���");
		exit(0);
	}
	for (i = 2;i <= n;i++)
	{
		p = p * i;
		sum = sum + p;
	}
	printf("�׳˵ĺ�Ϊ��%d", sum);
	system("pause");
	return 0;
}