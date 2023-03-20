#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int c1, c2;
	scanf("%d%d", &c1, &c2);
	int time = (c2 - c1) / 100;
	printf("%d", time % 3600);
	time /= 3600;
	printf(":02%d", time % 60);
	time /= 60;
	printf(":02%d", time % 60);
}