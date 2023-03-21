#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	char s[10] = { 0 };
	int score[1010] = { 0 };
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		int a;
		scanf("%s %d", s, &a);
		int j = 0, k = 0;;
		while (s[j] != '-')
		{
			k *= 10;
			k += s[j++] - '0';
		}
		score[k] += a;
	}
	int max = 0;
	for (int i = 1; i < 1010; i++)
	{
		if (score[i] > score[max])
			max = i;
	}
	printf("%d %d", max, score[max]);
}