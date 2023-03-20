#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() 
{
	int n, lock = 1;
	char a[19] = { 0 };
	int wei[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char c;
	scanf("%d", &n);
	while (n--)
	{
		int z = 0, wrong = 0;
		scanf("%s", a);
		for (int i = 0; i < 17; i++)
		{
			if (a[i] < '0' || a[i]>'9')
			{
				puts(a);
				wrong = 1;
				lock = 0;
				break;
			}
			z += (a[i] - '0') * wei[i];
		}
		if (wrong == 1)
			continue;
		else {
			z %= 11;

			int m = 12 - z;
			if (m == 10 && a[17] != 'X')
			{
				puts(a);
				lock = 0;
			}
			else if (m == 11 && a[17] != '0')
			{
				puts(a);
				lock = 0;
			}
			else if (m == 12 && a[17] != '1')
			{
				puts(a);
				lock = 0;
			}
			else if (m <10 && m != a[17] - '0')
			{
				puts(a);
				lock = 0;
			}
		}
		
	}
	if (lock == 1)
		printf("All passed");
	return 0;
}