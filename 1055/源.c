#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
typedef struct stu_s {
	char name[1024];
	int height;
}stu_t;
int comp(const void* a, const void* b)
{
	stu_t* pa = a, * pb = b;
	if (pa->height != pb->height)
		return pa->height - pb->height;
	else
	{
		int j = 0;
		while (pa->name[j] == pb->name[j])
		{
			j++;
		}
		return pb->name[j] - pa->name[j];
	}
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	stu_t* a = (stu_t*)calloc(n, sizeof(stu_t));
	stu_t* b = (stu_t*)calloc(n/k+1, sizeof(stu_t));
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d", &a[i].name, &a[i].height);
	}
	qsort(a, n, sizeof(stu_t), &comp);
	{
		int m = n - n / k * (k - 1), way = 0, pos2 = m / 2, pos1 = m /2 + 1;
		for (int i = 0; i < m; i++)
		{
			if (way == 0)
			{
				way = 1;
				memcpy(&b[++pos2 - 1], &a[n - 1 - i], sizeof(stu_t));
			}
			else
			{
				way = 0;
				memcpy(&b[--pos1 - 1], &a[n - 1 - i], sizeof(stu_t));
			}
		}
		for (int i = 0; i < m; i++)
		{
			printf("%s", b[i].name);
			if (i != m - 1)
				printf(" ");
		}
		printf("\n");
	}
	for (int i = k-2; i >=0; i--)
	{
		int m = n / k, way = 0, pos2 = m/2, pos1 =m/2 +1;
		for (int j = m-1; j >=0; j--)
		{
			if (way == 0)
			{
				way = 1;
				memcpy(&b[++pos2-1], &a[i * m + j], sizeof(stu_t));
			}
			else
			{
				way = 0;
				memcpy(&b[--pos1-1], &a[i * m + j], sizeof(stu_t));
			}
		}
		for (int i = 0; i < m; i++)
		{
			printf("%s", b[i].name);
			if (i != m - 1)
				printf(" ");
		}
		printf("\n");
	}

}