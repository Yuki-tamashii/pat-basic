#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n1, n2;
	scanf("%d", &n1);
	long long *a = (long long*)calloc(n1, sizeof(long long));
	int *b = (int*)calloc(n1, sizeof(int));
	int *c = (int*)calloc(n1, sizeof(int));
	for (int i = 0; i < n1; i++)
	{
		scanf("%lld %d %d", &a[i], &b[i], &c[i]);
	}
	scanf("%d", &n2);
	for (int i = 0; i < n1; i++)
	{	
		int s;
		scanf("%d", &s);
		for (int j = 0; j < n1; j++)
		{
			if (s == b[j])
			{
				printf("%lld %d", a[j], c[j]);
			}
		}
	}
}