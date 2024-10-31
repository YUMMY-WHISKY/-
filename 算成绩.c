#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0, x, min, max, s = 0;
	double average=0;
	scanf_s("%d", &x);
	max = x;
	min = x;
	while (x >= 0)
	{
		s = s + x;
		n++;
		if (x > max)
			max = x;
		if (x < min)
			min = x;
		scanf_s("%d", &x);
	}
	if (n > 0)
	{
		average = (double)s / n;
		printf("学生人数=%d，平均分=%.2lf,最高分=%d,最低分=%d",n,average,max,min);		
	}
	system("pause");
	return 0;
}