#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main()
{
	char c[23] = { 0 };
	int n;
	scanf("%s %d", c, &n);
	getchar();
	int i = 1;
	while (1)
	{
		char c2[1024] = { 0 };
		gets(c2);
		if (c2[0] == '#' && strlen(c2) == 1)
			break;
		if (strcmp(c, c2))
		{
			printf("Wrong password: %s\n", c2);
			if (i++ == n)
			{
				printf("Account locked\n");
				break;
			}
		}
		else
		{
			printf("Welcome in\n");
			break;
		}
	}

}