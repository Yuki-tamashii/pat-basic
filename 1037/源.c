#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int a1, b1, c1;
	int a2, b2, c2;
	scanf("%d.%d.%d %d.%d.%d", &a1, &b1, &c1, &a2, &b2, &c2);
	long long a = a1 * 17 * 29 + b1 * 29 + c1, b= a2 * 17 * 29 + b2 * 29 + c2;
	long long ans = b-a;
	if (ans < 0)
		printf("-");
	printf("%lld.%lld.%lld",abs( ans / 17 / 29), abs(ans % (17 * 29) / 29), abs(ans % 29));
}