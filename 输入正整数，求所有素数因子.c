#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j;
	printf("输入一个正整数：");
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		int sushu = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				sushu = 0;
				break;
			}
		}
		if (sushu && n % i == 0)
			printf("%d ", i);
	}
	
	
			return 0;
}








#include <stdio.h>

//int main() {
//    int num;
//    int i;
//    int j;
//
//    printf("请输入一个正整数: ");
//    scanf("%d", &num);
//
//    printf("素数因子为: ");
//
//    // 从2开始遍历到输入的数
//    for (i = 2; i <= num; i++) {
//        // 判断i是否为素数
//        int isPrime = 1;
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//
//        // 如果i是素数且能整除输入的数，则为素数因子
//        if (isPrime && num % i == 0) {
//            printf("%d ", i);
//
//            // 将输入的数不断除以该素数因子，直到不能再整除
//            while (num % i == 0) {
//                num /= i;
//            }
//        }
//    }
//
//    printf("\n");
//
//    return 0;
//}
