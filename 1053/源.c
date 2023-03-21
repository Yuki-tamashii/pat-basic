#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int k,  d, a=0, b=0;
	double e;
	scanf("%d %lf %d", &k, &e, &d);
	for (int i = 0; i < k; i++)
	{
		int day,kong=0;
		scanf("%d", &day);
		for (int j = 0; j < day; j++)
		{	
			double num;
			scanf("%lf", &num);
			if (num < e)
				kong++;
		}
		if (2 * kong > day)
		{
			
			if (day > d)
				b++;
			else a++;
		}
	}
	double a1 = (double)a / k, b1 = (double)b / k;
	printf("%.1f%% %.1f%%", a1*100, b1*100);
}