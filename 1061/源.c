#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main() 
{
	int s, is;
	scanf("%d %d", &s, &is);
	int* n = (int*)calloc((s + 2) * is, sizeof(int));
	for (int i = 0; i < s + 2; i++)
		for (int j = 0; j < is; j++)
			scanf("%d", n+i*is+j);
	for (int i = 0; i < s; i++)
	{
		int score = 0;
		for (int j = 0; j < is; j++)
		{
			if (n[(i + 2) * is + j] == n[1 * is + j])
				score += n[j];
		}
		printf("%d\n", score);
	}
}