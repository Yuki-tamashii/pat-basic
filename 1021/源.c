#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	char num[1024];
	int arr[10] = { 0 };
	scanf("%s", num);
	for (int i = 0; i < strlen(num); i++)
	{
		arr[num[i] - '0']++;
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] != 0)
			printf("%d:%d\n", i, arr[i]);
	}
}