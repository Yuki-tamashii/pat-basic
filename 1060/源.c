#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int comp(const void* a, const void* b)
{
	int* pa = a, * pb = b;
	return *pb - *pa;
}
int main()
{
	int n;
	scanf("%d", &n);
	int* a = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), &comp);
	int e = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > i+1)
			e = i + 1;
	}
	printf("%d", e);
}