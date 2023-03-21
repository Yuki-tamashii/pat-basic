#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int comp1(const void* pa, const void* pb)
{
	int* a = pa, * b = pb;
	return *a - *b;
}
int comp2(const void* pa, const void* pb)
{
	int* a = pa, * b = pb;
	return *b - *a;
}
int main() {
	int n;
	scanf("%d", &n);
	if (n == 0)
	{	
		printf("0");
		return 0;
	}
	int* a = (int*)calloc(n, sizeof(int)), * b = (int*)calloc(n, sizeof(int)), * c = (int*)calloc(n, sizeof(int));
	int max = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	int count = 0;
	qsort(b, n, sizeof(int), &comp1);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == b[i] && a[i] > max)
		{
			c[count++] = a[i];
		}	
		if(a[i] > max)max = a[i];
		
	}
	printf("%d\n", count);
	for (int i = 0; i < count; i++)
	{
		printf("%s%d", i ? " " : "", c[i]);
	}
}