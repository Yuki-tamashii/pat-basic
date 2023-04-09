#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int comp(const void* a, const void* b)
{
	double* pa = a, * pb = b;
	return *pa - *pb;
}
int main()
{
	int n;
	scanf("%d", &n);
	double* arr = (double*)calloc(n, sizeof(double));
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &arr[i]);
	}
	qsort(arr, n, sizeof(double), &comp);
	double sum = arr[0];
	for (int i = 1; i < n; i++)
	{
		sum /= 2;
		sum += arr[i] / 2;
	}
	int ans = sum / 1;
	printf("%d", ans);
}