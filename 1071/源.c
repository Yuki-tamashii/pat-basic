#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	int a, b1;
	scanf("%d %d", &b1, &a);
	for (int i = 0; i < a; i++)
	{
		int n1, b, t, n2;
		scanf("%d %d %d %d", &n1, &b, &t, &n2);
		if (t > b1)
			printf("Not enough tokens.  Total = %d.", b1);
		else
		{
			if ((b == 0 && n2 < n1) || (b == 1 && n2 > n1))
			{
				b1 += t;
				printf("Win %d!  Total = %d.", t, b1);
			}
			else
			{
				b1 -= t;
				printf("Lose %d.  Total = %d.", t, b1);
				if (b1 == 0)
				{
					printf("Game Over.");
					break;
				}

			}
		}
		printf("\n");
	}
}