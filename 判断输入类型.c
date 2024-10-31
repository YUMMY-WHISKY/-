#include<stdio.h>
int main()
{
		char n;
		printf("请输入一个字符：\n");
		n = getchar();
		if (n < 32)
			printf("你输入的是控制字符\n");
		else if ('a' <= n && 'z' >= n||'A' <= n && 'Z' >= n)
			printf("你输入的是字母\n");
		else if (n > '0' && n < '9')
			printf("你输入的是数字\n");
	return 0;
}