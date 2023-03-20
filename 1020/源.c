#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int sort, sum, count = 0;
	scanf("%d %d", &sort, &sum);
	int p = sum;
	double num[1024] = { 0 },sale_e[1024] = { 0 }, num_e[1024] = { 0 },sale[1024] = { 0 } ;
	double b;
	for (int i = 0; i < sort; i++)
	{
		scanf("%lf",&num[i]);
	}
	for (int i = 0; i < sort; i++)
	{	
		double j;
		scanf("%lf", &j);
		sale[i] = j / num[i];
	}
	int pos = 0;double max = 0;
	while (sum > 0&&p!=0)
	{	
		max = 0;
		for (int i = 0; i < sort; i++)
		{
			if (sale[i]> max && num[i] != 0)
			{
				pos = i;
				max = sale[i];
			}
		}
		if (sum >= num[pos])
		{
			num_e[count] = num[pos];
			sale_e[count] = num[pos]*sale[pos];
			sum -= num[pos];
			num[pos] = 0;
			p--;
		}
		else {
			num_e[count] = sum;
			num[pos] -= sum;
			b = sum;
			sale_e[count] = b*sale[pos];
			sum = 0;
		}
		count++;
	}
	b = 0;
	for (int i = 0; i < count; i++)
	{
		b += sale_e[i];
	}
	printf("%.2lf", b);
}
