#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x, y, z;
	for (x = 0; x <= 100; x++)
	{
		for (y = 0; y <= 100; y++)
		{
			for (z = 0; z <= 100; z++)
			{
				if (9 * x + y + z == 100
					&& 2 * x + 2 * y + 4 * z == 100)
					printf("%d %d %d\n", x, y, z);
			}
		}
	}
	return 0;
}