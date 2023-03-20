#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
	char c[100010];
	scanf("%s", c);
	long long p = 0, pa = 0, pat = 0;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[i] == 'P')
			p++;
		if (c[i] == 'A')
			pa += p;
		if (c[i] == 'T')
			pat += pa;
	}
	pat %= 1000000007;
	printf("%lld", pat);
}