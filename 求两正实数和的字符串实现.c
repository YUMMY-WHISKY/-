#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_LEN 30
void addstring(char* num1, char* num2, char* result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int carry = 0;
	int i, j, sum, k = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--, k++)
	{
		int digi1 = (i >= 0 && num1[i] != '.') ? num1[i] - '0' : 0;
		int digi2 = (j >= 0 && num2[j] != '.') ? num2[j] - '0' : 0;

		if (i >= 0 & num1[i] == '.')
		{
			result[k++] = '.';
			continue;
		}
		if (j >= 0 && num2[j] == '.')
		{
			continue;
		}
		sum = digi1 + digi2 + carry;
		carry = sum / 10;
		result[k] = (sum % 10) + '0';
	}
	result[k] = '\0';
	int start = 0, end = k - 1;
	while (start < end)
	{
		char temp = result[start];
		result[start] = result[end];
		result[end] = temp;
		start++;
		end--;
	}
}
int main()
{
	char num1[MAX_LEN], num2[MAX_LEN], result[MAX_LEN];
	printf("输入第一个正实数：");
		scanf("%s", num1);
	printf("输入第二个正实数：");
		scanf("%s", num2);
		addstring(num1, num2, result);
		printf("和为：%d\n", result);
	return 0;
}