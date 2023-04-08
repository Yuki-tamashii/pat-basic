#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int m, n, s;
	scanf("%d %d %d", &m, &n, &s);
	int* arr = (int*)calloc(m, sizeof(int));
	char c[1000][21] = { 0 };
	for (int i = 0; i < m; i++)
	{
		scanf("%s", c[i]);
	}
	if (s - 1 > m)
	{
		printf("Keep going...");
		return 0;
	}
	for (int i = s - 1; i < m;)
	{
		if (arr[i] == 0)
		{
			arr[i] = 1;
			for (int j = i + 1; j < m; j++)
				if (!strcmp(c[i], c[j]))
					arr[j] = 1;
			puts(c[i]);
			i += n;
		}
		else i++;

	}
}