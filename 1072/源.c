#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int n1, n2,a = 0, b = 0;
int check(char* name, int n, int* a, int* arr)
{	
	int num = 0;
	for(int i=0;i<n;i++)
	{	
		int wrong =1;
		for (int j = 0; j < n2; j++)
		{
			if (a[i] == arr[j])
			{
				wrong = 0;
				break;
			}
		}
		if (wrong == 0)
		{
			b++;
			num++;
		}
	}
	if (num == 0)
		return 0;
	else
	{	
		printf("%s:", name);
		for (int i = 0; i < n; i++)
		{	
			int wrong = 1;
			for (int j = 0; j < n2; j++)
			{
				if (a[i] == arr[j])
				{
					wrong = 0;
					break;
				}
			}
			if (wrong == 0)
			{
				printf(" %04d", a[i]);
			}
		}
		printf("\n");
	}
}
int main()
{
	scanf("%d %d", &n1, &n2);
	int* arr = (int*)calloc(n2, sizeof(int));
	for (int i = 0; i < n2; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n1; i++)
	{
		char name[5] = { 0 };
		int n;
		scanf("%s %d", name, &n);
		int* a = (int*)calloc(n, sizeof(int));
		for (int j = 0; j < n; j++)
			scanf("%d", &a[j]);
		a+=check(name, n, a, arr);
	}
}