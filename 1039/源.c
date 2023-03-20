#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() 
{
	char a1[1001] = { 0 }, a2[1001] = { 0 };
	int b1[200] = { 0 }, b2[200] = { 0 };
	int duo = 0, shao = 0;
	scanf("%s%s", a1, a2);
	for (int i = 0; i < strlen(a1); i++)
		b1[(int)a1[i]]++;
	for (int i = 0; i < strlen(a2); i++)
		b2[(int)a2[i]]++;
	for (int i = 0; i < 200; i++)
	{
		if (b1[i] > b2[i])
			duo += b1[i] - b2[i];
		if (b1[i] < b2[i])
			shao += b2[i] - b1[i];
	}
	if (shao > 0)
		printf("No %d", shao);
	else printf("Yes %d", duo);
}