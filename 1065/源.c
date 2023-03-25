#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main() 
{
	int ar[100000] = { 0 };
	int br[100000] = { 0 };
	memset(ar, -1, 100000*sizeof(int));
	memset(br, -1, 100000 * sizeof(int));
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		br[a] = b;
		br[b] = a;
	}
	scanf("%d", &n);
	while (n--)
	{
		int a;
		scanf("%d", &a);
		if(br[a]!=-1)
		{
			if (br[br[a]] == a)
				br[a] = -1;
			else
			{	
				ar[br[a]] = -1;
				continue;
			}
		}
		ar[a] = -2;
	}
	int count = 0,fir=0;
	for (int i = 0; i < 100000; i++)
		if (ar[i] != -1)
			count++;
	printf("%d\n", count);
	for(int i = 0; i < 100000; i++)
		if (ar[i] != -1)
		{
			if (fir == 0)
				fir = 1;
			else printf(" ");
			printf("%05d", i);
		}
}