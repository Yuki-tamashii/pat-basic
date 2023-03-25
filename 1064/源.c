#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int a[1010] = { 0 };
	int n;
	scanf("%d", &n);
	int* b = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
		scanf("%d", &b[i]);
	for (int i = 0; i < n; i++)
	{	
		int d = 0;
		while (b[i] > 0)
		{
			d += b[i] % 10;
			b[i] /= 10;
		}
		a[d] ++;
	}
	int count = 0,fir=0;
	for (int i = 0; i < 1010; i++)
		if (a[i] >= 1)
			count++;
	printf("%d\n", count);
	for (int i = 0; i < 1010; i++)
		if (a[i] >= 1)
		{	
			if (fir == 0)
				fir = 1;
			else printf(" ");
			printf("%d", i);
		}
}