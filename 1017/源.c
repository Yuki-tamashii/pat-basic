#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	char A[1005] = { 0 };
	char ans[1005] = { "0\0" };
	int R,j=0;
	scanf("%s %d",&A,&R);
	int end,start=(A[0]-48)/R;
	if (start!=0 && strlen(A)> 1 || strlen(A)  == 1)
		printf("%d", start);
	end= (A[0] - 48) % R;
	for (int i = 1; A[i] != '\0'; i++)
	{
		int num = A[i] - 48 + end * 10;
		end = num % R;
		start = num / R;
		printf("%d", start);
	}
	printf(" %d",end);
}