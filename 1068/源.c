#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int m, n, tol;
int comp(const void* a, const void* b)
{
	int* pa = a, * pb = b;
	return *pb - *pa;
}
int check(int x, int y, int* map)
{
	if (
		check2(x - 1, y - 1, map, x, y) &&
		check2(x - 1, y, map, x, y) &&
		check2(x - 1, y + 1, map, x, y) &&
		check2(x, y + 1, map, x, y) &&
		check2(x, y - 1, map, x, y) &&
		check2(x + 1, y + 1, map, x, y) &&
		check2(x + 1, y, map, x, y) &&
		check2(x + 1, y - 1, map, x, y)
		)
		return 1;
	else return 0;
}
int check2(int x, int y, int* map, int x2, int y2)
{
	if (x >= 0 && y >= 0 && abs(map[y * n + x] - map[y2 * n + x2]) <= tol)
		return 0;
	else return 1;
}
int main()
{
	scanf("%d %d %d", &n, &m, &tol);
	int* map = (int*)calloc(m * n, sizeof(int));
	int* arr = (int*)calloc(m * n, sizeof(int));
	for (int i = 0; i < m * n; i++)
	{
		scanf("%d", &map[i]);
	}
	int num = 0, pos = 0;
	for (int i = 0; i < m * n; i++)
	{
		int wrong = 0;
		for (int j = 0; j < m * n; j++)
		{
			if (map[i] == map[j] && i != j)
			{
				wrong = 1;
				break;
			}
		}
		if (wrong == 1)
			continue;
		int y = i / n;
		int x = i % n;
		if (check(x, y, map))
		{
			num++;
			pos = i;
		}
	}
	if (num == 0)
		printf("Not Exist");
	else if (num != 1)
		printf("Not Unique");
	else printf("(%d, %d): %d", pos % n + 1, pos / n + 1, map[pos]);
}