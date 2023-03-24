#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int n,sum=0;
	int a[10] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			sum += a[i] * 11 + a[j] * 11;
		}
	printf("%d", sum);
}