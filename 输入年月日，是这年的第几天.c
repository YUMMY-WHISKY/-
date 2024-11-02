#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int year, month, day, i;
	int total = 0;
	printf("请输入年月日\n");
		scanf("%d %d %d", &year, &month, &day);
		int cnm = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
		for (i = 1; i < month; i++)
		{
			if (i == 2)
				total += cnm ? 29 : 28;
			else if (i == 4 || i == 6 || i == 9 || i == 11)
				total += 30;
			else
				total += 31;
		}
		total += day;
		printf("%d年%d月%d日是这年的%d天", year, month, day, total);
	return 0;
}