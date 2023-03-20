#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int arr[10] = { 0 },sum=0;
	for (int i = 0; i < 10; i++)
	{
		int n;
		scanf("%d", &n);
		arr[i] += n;
		sum += n;
	}
	for (int i = 0; i < sum; i++)
	{
		if (i == 0)
		{
			for (int j = 1; j < 10; j++)
			{
				if (arr[j] != 0)
				{
					arr[j]--;
					printf("%d", j);
					break;
				}
			}
		}
		else
		{
			for (int j = 0; j < 10; j++)
			{
				if (arr[j] != 0)
				{
					arr[j]--;
					printf("%d", j);
					break;
				}
			}
		}
	}
}