	#define _CRT_SECURE_NO_WARNINGS
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include<ctype.h>
	#include<math.h>
	typedef struct ti_s {
		int s;
		int a;
		int b;
		char c[5];
	}ti_t;
	int main() 
	{
		int a, b,max=0;
		scanf("%d %d", &a, &b);
		int* w = (int*)calloc(b, sizeof(int));
		int* s = (int*)calloc(a, sizeof(int));
		ti_t* ti = (ti_t*)calloc(a, sizeof(ti_t));
		for (int i = 0; i < b; i++)
		{
			scanf("%d %d %d",&ti[i].s, &ti[i].a, &ti[i].b);
			for (int j = 0; j < ti[i].b; j++)
			{
				scanf(" %c", &ti[i].c[j]);
			}
		}
		for (int i = 0; i < a; i++)
		{
			for (int j = 0; j < b; j++)
			{	
				int n,wrong=0;
				char c[5] = { 0 };
				char p=getchar();
				p=getchar();
				scanf("%d", &n);
				for (int k = 0; k < n; k++)
				{
					scanf(" %c", &c[k]);
					int bool = 0;
					for (int m = 0; m < ti[j].b; m++)
					{
						if (c[k] == ti[j].c[m]) 
							bool = 1;
					}
					if (bool == 0)
					{
						wrong = 1;
					}
				}
				p=getchar();
				if (n != ti[j].b)
					wrong = 1;
				if (wrong == 1)
					w[j]++;
				else s[i] += ti[j].s;
			}
		}
		for (int i = 0; i < a; i++)
			printf("%d\n", s[i]);
		for (int i = 0; i < b; i++)
			if (w[i] > max)
				max = w[i];
		int count = 0;
		for (int i = 0; i < b; i++)
			if (max == w[i])
				count++;
		
		if (max != 0)
		{	
			printf("%d", max);
			for (int i = 0; i < b; i++)
				if (max == w[i])
					printf(" %d", i + 1);
		}
		else printf("Too simple");
	}