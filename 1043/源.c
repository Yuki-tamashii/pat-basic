#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	char s[10010] = { 0 };
	gets(s);
	int a[7] = { 0 };
	for (int i = 0; i < strlen(s); i++)
	{
		switch (s[i])
		{
		case 'P':
			a[0]++;
			break;
		case 'A':
			a[1]++;
			break;
		case 'T':
			a[2]++;
			break;
		case 'e':
			a[3]++;
			break;
		case 's':
			a[4]++;
			break;
		case 't':
			a[5]++;
			break;
		default:
			break;
		}
	}
	int	duo = 0;
	int min = 0;
	for (int i = 1; i < 6; i++)
		if (a[i] < a[min])
			min = i;
	min = a[min];
	for (int i = 0; i < 6; i++)
	{
		a[i] -= min;
		duo += a[i];
	}
	for (int i = 0; i < min; i++)
		printf("PATest");
	while (duo)
	{
		for (int i = 0; i < 6; i++)
		{
			if (a[i] != 0)
			{
				switch (i)
				{
				case 0:
					printf("P");
					break;
				case 1:
					printf("A");
					break;
				case 2:
					printf("T");
					break;
				case 3:
					printf("e");
					break;
				case 4:
					printf("s");
					break;
				case 5:
					printf("t");
					break;
				default:
					break;
				}
				a[i]--;
				duo--;
			}
		}
	}

}