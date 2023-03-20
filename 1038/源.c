#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int comp(const void* a, const void* b)
{
	int* pa = (int*)a, * pb = (int*)b;
	return *pa - *pb;
}
int main() {
	int n, a[101] = { 0 };
	scanf("%d", &n);
	int s;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &s);
		a[s]++;
	}
	int len = n;
	scanf("%d", &n);
	while (n--)
	{
		int goal;
		scanf("%d", &goal);
		printf("%d", a[goal]);
		if (n != 0)
			printf(" ");
	}
}