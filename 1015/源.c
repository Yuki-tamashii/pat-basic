#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct student_s {
	int num;
	int de;
	int cai;
}student_t;
student_t stu, arr_a[10000] = { 0 }, arr_b[10000] = { 0 }, arr_c[10000] = { 0 }, arr_d[10000] = { 0 };
int comp(const void* er1, const void* er2)
{
	student_t* pa = (student_t*)er1, * pb = (student_t*)er2;
	if (pa->de + pa->cai > pb->cai + pb->de)
		return -1;
	else if (pa->de + pa->cai == pb->cai + pb->de)
	{
		if (pa->de < pb->de)
			return -1;
		else if (pa->de == pb->de)
			if (pa->num > pb->num)
				return -1;
	}
	return 1;
}
int temp(student_t* a, student_t* b)
{
	student_t temp_t;
	memcpy(&temp_t, a, sizeof(student_t));
	memcpy(a, b, sizeof(student_t));
	memcpy(b, &temp_t, sizeof(student_t));
}
int main() {
	int N, L, H, i = 0, a = 0, b = 0, c = 0,d=0;
	scanf("%d%d%d", &N, &L, &H);
	while (N--)
	{
		scanf("%d%d%d", &stu.num, &stu.de, &stu.cai);
		if (stu.de < L || stu.cai < L)
			continue;
		else if (stu.de >= H && (stu.cai >= H))
			memcpy(&arr_a[a++], &stu, sizeof(student_t));
		else if (stu.de >= H&& stu.cai>=L)
			memcpy(&arr_b[b++], &stu, sizeof(student_t));
		else if (stu.cai <= stu.de&& stu.cai>=L&& stu.de>=L)
			memcpy(&arr_c[c++], &stu, sizeof(student_t));
		else if (stu.de >= L && stu.cai >= L)
			memcpy(&arr_d[d++], &stu, sizeof(student_t));
		i++;
	}
	printf("%d\n", i);
	qsort(arr_a, a, sizeof(student_t), comp);
	qsort(arr_b, b, sizeof(student_t), comp);
	qsort(arr_c, c, sizeof(student_t), comp);
	qsort(arr_d, d, sizeof(student_t), comp);
	/*for (int j = 0; j < a - 1; j++)
	{
		for (int k = j + 1; k < a; k++)
		{
			if (arr_a[k].cai + arr_a[k].de > (arr_a[j].cai + arr_a[j].de))
			{
				temp(&arr_a[k], &arr_a[j]);
			}
			else if (arr_a[k].cai + arr_a[k].de == (arr_a[j].cai + arr_a[j].de))
			{
				if (arr_a[k].de > arr_a[j].de)
					temp(&arr_a[k], &arr_a[j]);
				else if (arr_a[k].de == arr_a[j].de)
					if (arr_a[k].num < arr_a[j].num)
						temp(&arr_a[k], &arr_a[j]);
			}
		}
	}
	for (int j = 0; j < b - 1; j++)
	{
		for (int k = j + 1; k < b; k++)
		{
			if (arr_b[k].cai + arr_b[k].de > (arr_b[j].cai + arr_b[j].de))
			{
				temp(&arr_b[k], &arr_b[j]);
			}
			else if (arr_b[k].cai + arr_b[k].de == (arr_b[j].cai + arr_b[j].de))
			{
				if (arr_b[k].de > arr_b[j].de)
					temp(&arr_b[k], &arr_b[j]);
				else if (arr_b[k].de == arr_b[j].de)
					if (arr_b[k].num < arr_b[j].num)
						temp(&arr_b[k], &arr_b[j]);
			}
		}
	}
	for (int j = 0; j < c - 1; j++)
	{
		for (int k = j + 1; k < c; k++)
		{
			if (arr_c[k].cai + arr_c[k].de > (arr_c[j].cai + arr_c[j].de))
			{
				temp(&arr_c[k], &arr_c[j]);
			}
			else if (arr_c[k].cai + arr_c[k].de == (arr_c[j].cai + arr_c[j].de))
			{
				if (arr_c[k].de > arr_c[j].de)
					temp(&arr_c[k], &arr_c[j]);
				else if (arr_c[k].de == arr_c[j].de)
					if (arr_c[k].num < arr_c[j].num)
						temp(&arr_c[k], &arr_c[j]);
			}
		}
	}
	for (int j = 0; j < d - 1; j++)
	{
		for (int k = j + 1; k < d; k++)
		{
			if (arr_d[k].cai + arr_d[k].de > (arr_d[j].cai + arr_d[j].de))
			{
				temp(&arr_c[k], &arr_c[j]);
			}
			else if (arr_d[k].cai + arr_d[k].de == (arr_d[j].cai + arr_d[j].de))
			{
				if (arr_d[k].de > arr_d[j].de)
					temp(&arr_d[k], &arr_d[j]);
				else if (arr_d[k].de == arr_d[j].de)
					if (arr_d[k].num < arr_d[j].num)
						temp(&arr_d[k], &arr_d[j]);
			}
		}
	}*/
	for (int j = 0; j < a; j++)
	{
		printf("%d %d %d\n", arr_a[j].num, arr_a[j].de, arr_a[j].cai);
	}
	for (int j = 0; j < b; j++)
	{
		printf("%d %d %d\n", arr_b[j].num, arr_b[j].de, arr_b[j].cai);
	}
	for (int j = 0; j < c; j++)
	{
		printf("%d %d %d\n", arr_c[j].num, arr_c[j].de, arr_c[j].cai);
	}
	for (int j = 0; j < d; j++)
	{
		printf("%d %d %d\n", arr_d[j].num, arr_d[j].de, arr_d[j].cai);
	}
}