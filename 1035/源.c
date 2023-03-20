#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n;
	scanf("%d", &n);
	int* a_c1 = (int*)calloc(n, sizeof(int)), * a_z = (int*)calloc(n, sizeof(int)), * a_c2 = (int*)calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a_c1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a_z[i]);
	}
	memcpy(a_c2, a_c1,n*(sizeof(int)));
	int flag = -1;
	for (int i = 1; i < n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (a_c1[j + 1] < a_c1[j])
			{
				int temp = a_c1[j];
				a_c1[j] = a_c1[j + 1];
				a_c1[j + 1] = temp;
			}
		}
		if (flag == 0)
			break;
		int lock = 1;
		for (int k = 0; k < n; k++)
		{
			if (a_c1[k] != a_z[k])
			{
				lock = 0;
				break;
			}
		}
		if (lock == 1)
		{
			flag = 0;
		}
	}
	int l = 2;
	while (l <= n)
	{
		int c = n / l;
		int q = n % l;
		if (q != 0)
			c++;
		for (int i = 0; i < c; i++)
		{
			if (i < c - 1) {
				for (int j = i * l; j < (i + 1) * l - 1; j++)
				{
					for (int k = (i + 1) * l - 2; k >= j; k--)
					{
						if (a_c2[k] > a_c2[k + 1])
						{
							int temp = a_c2[k];
							a_c2[k] = a_c2[k + 1];
							a_c2[k + 1] = temp;
						}
					}
				}
			}
			else
			{
				if (q != 0) 
				{
					for (int j = l*(c-1); j < l * (c - 1)+q; j++)
					{
						for (int k=l* (c - 1) + q-2; k >= j; k--)
						{
							if (a_c2[k] > a_c2[k + 1])
							{
								int temp = a_c2[k];
								a_c2[k] = a_c2[k + 1];
								a_c2[k + 1] = temp;
							}
						}
					}
				}
				else {
					for (int j = i * l; j < (i + 1) * l - 1; j++)
					{
						for (int k = (i + 1) * l - 2; k >= j; k--)
						{
							if (a_c2[k] > a_c2[k + 1])
							{
								int temp = a_c2[k];
								a_c2[k] = a_c2[k + 1];
								a_c2[k + 1] = temp;
							}
						}
					}
				}
			}
		}
		if (flag == 1)
			break;
		int lock = 1;
		for (int k = 0; k < n; k++)
		{
			if (a_c2[k] != a_z[k])
			{
				lock = 0;
				break;
			}
		}
		if (lock == 1)
		{
			flag = 1;
		}
		l*=2;
	}
	if(flag==0)
	{
		printf("Insertion Sort\n");
		for (int i = 0; i < n; i++)
		{
			printf("%d", a_c1[i]);
			if (i != n - 1)
				printf(" ");
		}
	}
	if (flag == 1)
	{
		printf("Merge Sort\n");
		for (int i = 0; i < n; i++)
		{
			printf("%d", a_c2[i]);
			if (i != n - 1)
				printf(" ");
		}
	}
}