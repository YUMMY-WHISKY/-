#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, j;
	printf("����һ����������");
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
//    printf("������һ��������: ");
//    scanf("%d", &num);
//
//    printf("��������Ϊ: ");
//
//    // ��2��ʼ�������������
//    for (i = 2; i <= num; i++) {
//        // �ж�i�Ƿ�Ϊ����
//        int isPrime = 1;
//        for (j = 2; j < i; j++) {
//            if (i % j == 0) {
//                isPrime = 0;
//                break;
//            }
//        }
//
//        // ���i�������������������������Ϊ��������
//        if (isPrime && num % i == 0) {
//            printf("%d ", i);
//
//            // ������������ϳ��Ը��������ӣ�ֱ������������
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
