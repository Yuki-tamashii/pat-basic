#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int a,Db,Da, b,Pa=0,Pb=0,count_a=0,count_b=0;
	scanf("%d %d %d %d", &a,&Da, &b,&Db);
	while (a != 0)
	{
		int i = a % 10;
		a /= 10;
		if (i == Da)
			count_a++;
	}
	while (b != 0)
	{
		int i = b % 10;
		b /= 10;
		if (i == Db)
			count_b++;
	}
	while (count_a--)
	{
		Pa *= 10;
		Pa += Da;
	}
	while (count_b--)
	{
		Pb *= 10;
		Pb += Db;
	}
	printf("%d\n", Pa + Pb);
}