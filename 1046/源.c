#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n, a1, a2, b1, b2,c1=0,c2=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &a1, &a2, &b1, &b2);
		if (a2 == a1 + b1)
		{
			if (a2 == b2)
				continue;
			else c1++;
		}
		if (b2 == a1 + b1 && a2 != b2)
			c2++;
	}
	printf("%d %d", c2, c1);
}