#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int a1, a2, b1, b2,k,fir=0;
	scanf("%d/%d %d/%d %d", &a1, &a2, &b1, &b2, &k);
	for (int i = 0; i < k; i++)
	{
		if (a1 * k - i * a2 < 0 && b1 * k - i * b2 > 0)
			if (i != 0 && k % i == 0);
			else
			{
				if (fir == 0)
				{
					fir = 1;
				}
				else printf(" ");
				printf("%d/%d",i,k);
			}
	}
}