#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n, max2=0, max1 = 0, i=0;
	scanf("%d", &n);
	int* arr1= (int* )calloc(n, sizeof(int));
	while (n--)
	{	
		int a, b;
		scanf("%d%d", &a, &b);
		if (i++ == 0)
		{
			max2 = b;
			max1 = a;
		}
		arr1[a] += b;
		if (arr1[a] > max2)
		{
			max2 = arr1[a];
			max1 = a;
		}
	}
	printf("%d %d", max1, max2);
}