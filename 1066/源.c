#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int x, y, l, h, g;
	scanf("%d %d %d %d %d\n", &x, &y, &l, &h, &g);
	for(int i=0;i<x;i++)
	{
		for (int j = 0; j < y; j++)
		{
			int c;
			scanf("%d", &c);
			if (c <= h && c >= l)
				c = g;
			if (j != 0)
				printf(" ");
			printf("%03d",c);
		}
		printf("\n");
	}
}