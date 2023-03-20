#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int compare(const void* a, const void* b)
{
	int* pa = (int*)a;
	int* pb = (int*)b;
	return *pa - *pb;
}
int main() {
	int n, p, max = 0;
	scanf("%d %d", &n, &p);
	int arr[100100] = { 0 }, k = 0, length = n;
	while (n--)
		scanf("%d", &arr[k++]);
	qsort(arr, length, sizeof(int), &compare);
	for (int i = 0; i < length && max < length - i; i++)
	{
		int count = mid(arr,i,length-1,(long long)arr[i]*p) - i;
		if (count > max)
			max = count;
	}
	printf("%d", max);
}
int mid(int* arr, int low, int high, long long n)
{	
	if (low >= high)
		return high;
	int a = low+( high-low) / 2;
	if (arr[a] > n)
		mid(arr, low, a - 1, n);
	else if (arr[a] < n)
		mid(arr, a + 1, high, n);
	else return a;
}