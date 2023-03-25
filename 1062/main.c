#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int a1, a2, b1, b2, k, fir = 0;
	scanf("%d/%d %d/%d %d", &a1, &a2, &b1, &b2, &k);
	if (a1 * b2 - b2 * b1 > 0)
	{
		int temp = b1;
		b1 = a1;
		a1 = temp;
		temp = b2;
		b2 = a2;
		a2 = temp;
	}
	for (int i = 1; i < k; i++)
	{
		int a = i, b = k;
		while (a != 0)
		{
			int temp = b % a;
			b = a;
			a = temp;
		}
		if (b != 1)
			continue;
		if (a1 * k - i * a2 < 0 && b1 * k - i * b2 > 0)
		{
			if (fir == 0)
			{
				fir = 1;
			}
			else printf(" ");
			printf("%d/%d", i, k);
		}
	}
}