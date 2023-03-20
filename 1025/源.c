#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct lnode_s {
	int ad;
	int val;
	int n_ad;
	struct londe_t* next;
}lnode_t;

int main() {
	lnode_t* arr;
	int ad_1, n, k;
	scanf("%d%d%d", &ad_1, &n, &k);
	arr = (lnode_t*)calloc(n, sizeof(lnode_t));
	lnode_t* phead = &arr[0], * pcur;
	if (arr[0].n_ad == -1)
		phead = &arr[1];
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d%d", &arr[i].ad, &arr[i].val, &arr[i].n_ad);
		if (arr[i].ad == ad_1)
			phead = &arr[i];
	}
	pcur = phead;
	for (int i = 0; i < n - 1; i++)
	{
		int q = pcur->n_ad,lock = 1;
		for (int j = 0; j < n; j++)
		{
			if (lock == 0)
				break;
			if (arr[j].ad == q)
			{
				pcur->next = &arr[j];
				pcur = pcur->next;
				if (arr[j].n_ad == -1)
				{
					n = i + 2;
					lock = 0;
				}
				break;
			}
		}
	}
	pcur = phead;
	lnode_t* p1 = NULL, * p0, * pre = NULL;
	for (int i = 0; i < n / k; i++)
	{
		p0 = pcur;
		for (int j = 0; j < k - 1; j++)
		{
			p1 = pcur->next;
			pcur->next = p1->next;
			p1->next = p0;
			p0 = p1;
		}
		if (i == 0)
		{
			phead = p0;
			pre = pcur;
			pcur = pcur->next;
			continue;
		}

		pre->next = p0;
		pre = pcur;
		pcur = pcur->next;

	}
	p1 = phead;
	for (int i = 0; i < n; i++) {
		p0 = p1->next;
		if (p0 == NULL)
		{
			p1->n_ad = -1;
			break;
		}
		p1->n_ad = p0->ad;
		p1 = p0;
		printf("%05d %d %05d\n", phead->ad, phead->val, phead->n_ad);
		phead = phead->next;
	}
	printf("%05d %d %d\n", phead->ad, phead->val, phead->n_ad);

}
