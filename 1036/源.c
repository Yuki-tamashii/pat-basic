#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int len;
	char c;
	scanf("%d %c", &len, &c);
	int h = len / 2;
	if (len % 2 != 0)
		h++;
	for (int i = 0; i < len; i++)
		printf("%c", c);
	printf("\n");
	for (int i = 0; i < h - 2; i++)
	{
		printf("%c", c);
		for (int j = 0; j < len - 2; j++)
			printf(" ");
		printf("%c\n", c);
	}
	for (int i = 0; i < len; i++)
		printf("%c", c);
}