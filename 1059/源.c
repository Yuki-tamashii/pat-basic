#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int u[10000] = { 0 };
	u[1] = 1;
	u[0] = 1;
	for (int i = 2; i < 10000; i++) {
		if (u[i] == 0) {
			for (int j = 2 * i; j < 10000; j += i) {
				u[j] = 1;
			}
		}
	}
	int n, k;
	scanf("%d", &n);
	int* c = (int*)calloc(n , sizeof(int));
	int a[10000] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
		a[c[i]]++;
	}
	scanf("%d", &k);
	for (int i = 0; i < k; i++)
	{
		int pa = 0;
		scanf("%d", &pa);
		int f = 0;
		for (int j = 0; j < n; j++)
		{	
			if (a[pa] <1)
			{
				printf("%04d: Are you kidding?\n", pa);
				break;
			}
			if (pa == c[j])
			{
				f = 1;
				if (a[pa] != 1)
				{
					printf("%04d: Checked\n", pa);
					break;
				}
				else if (j == 0 )
				{
					printf("%04d: Mystery Award\n", pa);
					a[pa]++;
					break;
				}
				else if (!u[j + 1])
				{
					printf("%04d: Minion\n", pa);
					a[pa]++;
					break;
				}
				else
				{
					printf("%04d: Chocolate\n", pa);
					a[pa]++;
					break;
				}

			}
		}
	}

}