#include<stdio.h>
int main()
{
		char n;
		printf("������һ���ַ���\n");
		n = getchar();
		if (n < 32)
			printf("��������ǿ����ַ�\n");
		else if ('a' <= n && 'z' >= n||'A' <= n && 'Z' >= n)
			printf("�����������ĸ\n");
		else if (n > '0' && n < '9')
			printf("�������������\n");
	return 0;
}