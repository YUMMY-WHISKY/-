#include< stdio.h>
#define PI 3.14159
#define RUO 7.86
int main()
{
	double d1, d2, h, s1, s2, m;
	scanf_s("%lf %lf %lf", &d1, &d2, &h);
	s1 = PI * (d1 / 2) * (d1 / 2);
	s2 = PI * (d2 / 2) * (d2 / 2);
	m = (s1 - s2) * h * RUO;
	printf("铁环的重量为：%.2lf", m);
	return 0;
}

