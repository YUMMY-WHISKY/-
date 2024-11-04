#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i;
	char arr[100] = {0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("ÇëÊäÈë×Ö·û£º");
	for (i = 0; i < sz - 1; i++)
	{
		arr[i] = getchar();
		if (arr[i] == '\n')
			break;
		if (arr[i] >= 65 && arr[i] <= 90)
			arr[i] += 32;
	}
		printf("%s", arr);
	return 0;
}
