#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int com1(const void* a, const void* b)
{
	int* p1 = a, * p2 = b;
		if (*p1 >= *p2)
			return -1;
		return 1;
}
int com2(const void* a, const void* b)
{
	int* p1 = a, * p2 = b;
	if (*p2 >= *p1)
		return -1;
	return 1;
}
int done(int n)
{
	int a[4],n1=0,n2=0,num=n;
	for (int i = 0; i < 4; i++)
	{
		a[i] = n % 10;
		n /= 10;
	}
	if (a[0] == a[1] && a[0] == a[2] && a[0] == a[3])
	{
		printf("%04d - %04d = 0000\n",num,num);
		return -1;
	}
	qsort(a,4,sizeof(int), com1);
	for (int i = 0; i < 4; i++)
	{
		n1 *= 10;
		n1 += a[i];
	}
	qsort(a, 4, sizeof(int), com2);
	for (int i = 0; i < 4; i++)
	{
		n2 *= 10;
		n2 += a[i];
	}
	printf("%04d - %04d = %04d\n", n1, n2, n1 - n2);
	return n1 - n2;
}
int main() {
	int n;
	scanf("%d", &n);
	if (n == 6174)
		n = done(6174);
	while (n != 6174&&n!=-1)
		n = done(n);
}