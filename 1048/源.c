#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int flag;
	char A[101], B[101];
	scanf("%s %s", A, B);
	int length = (((strlen(B)) > (strlen(A))) ? (strlen(B)) : (strlen(A)));
	if (length % 2 == 0)
		flag = 1;
	else flag = 0;
	for (int i = 0; i < strlen(B) || i < strlen(A); i++)
	{
		if (i < strlen(B) - strlen(A) && strlen(B) >= strlen(A))
		{
			if(flag==0)
				printf("%c", B[i]);
			else 
			{
				if (B[i] != '0')
					printf("%d", 10 - B[i] + '0');
				else printf("0");
			}
		}
		else if (strlen(A) > strlen(B)&&i < strlen(A) - strlen(B))
		{
			if (flag == 0)
				printf("%c", A[i]);
			else
			{	
				if (A[i] != '0')
					printf("%d", 10 - A[i] + '0');
				else printf("0");
			}
		}
		else 
		{
			if (flag == 0&& strlen(B) == length)
			{
				int a = B[i] + A[i - strlen(B) + strlen(A)] - '0' - '0';
				a %= 13;
				if (a == 12)
					printf("K");
				else if (a == 11)
					printf("Q");
				else if (a == 10)
					printf("J");
				else printf("%d", a);
			}
			else if (flag == 0 && strlen(A) == length)
			{
				int a = B[i - strlen(A) + strlen(B)] + A[i] - '0' - '0';
				a %= 13;
				if (a == 12)
					printf("K");
				else if (a == 11)
					printf("Q");
				else if (a == 10)
					printf("J");
				else printf("%d", a);
			}
			else if(strlen(B)==length)
			{
				int a = B[i] - A[i - strlen(B) + strlen(A)] + 10;
				a %= 10;
				printf("%d", a);
			}
			else
			{
				int a =  B[i - strlen(A) + strlen(B)] -A[i] + 10;
				a %= 10;
				printf("%d", a);
			}
		}
		if (flag == 0)
		{
			flag = 1;
		}
		else flag = 0;
	}
}