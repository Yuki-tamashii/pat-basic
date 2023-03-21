#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main()
{
	int n;
	scanf("%d", &n);
	double* a = (double*)calloc(n, sizeof(double)), sum = 0;;
	for (int i = 0; i < n; i++)
	{	
		scanf("%lf", &a[i]);
		sum += (i + 1) * (n - i)* a[i];
	}
	printf("%.2lf", sum);
}