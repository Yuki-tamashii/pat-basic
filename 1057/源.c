#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	char c;
	int sum = 0;
	while((c=getchar())!='\n')
	{
		int n=0;
		if (isalpha(c))
		{
			if (c >= 'a')
				n = c - 'a' + 1;
			else n = c - 'A' + 1;
			sum += n;
		}
	}

	int a=0, b=0;
	while (sum > 0)
	{
		if (sum % 2 == 0)
			a++;
		else b++;
		sum /= 2;
	}
	printf("%d %d", a, b);
}