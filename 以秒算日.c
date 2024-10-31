#include <stdio.h>
int main()
{
	int s;
	scanf_s("%d", &s);
	printf("%d秒等于%d天%d小时%d分钟%d秒\n", s, s / 86400, (s % 86400) / 3600, (s % 3600) / 60, s % 60)
	return 0;
}
