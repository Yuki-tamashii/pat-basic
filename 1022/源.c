#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int A, B,D;
	scanf("%d %d %d", &A, &B,&D);
	A = A + B;
	if (A == 0)
	{
		printf("0");
		return 0;
	}
	char arr[1024] = { 0 };
	int i = 0;
	while (A != 0)
	{
		arr[i++] ='0'+ A % D;
		A /= D;
	}
	for (int j = 0; j < strlen(arr); j++)
	{
		printf("%c", arr[strlen(arr)-1 - j]);
	}
	
}