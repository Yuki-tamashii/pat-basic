#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int cjb(char a, char b)
{
	if (a == 'C')
	{
		if (b == 'C')
			return 0;
		else if (b == 'J')
			return 1;
		else return -1;
	}
	if (a == 'J')
	{
		if (b == 'J')
			return 0;
		else if (b == 'B')
			return 1;
		else return -1;
	}
	if (a == 'B')
	{
		if (b == 'B')
			return 0;
		else if (b == 'C')
			return 1;
		else return -1;
	}
}
int main() {
	int num, a_w = 0, p = 0, b_w = 0,ac[3]={0}, bc[3]= { 0 };
	scanf("%d", &num);
	char a, b;
	while (num--)
	{
		scanf("\n%c %c", &a, &b);
		int ret = cjb(a, b);
		if (ret == 1) {
			//统计用哪个赢的
			if (a == 'C')
				ac[0]++;
			else if (a == 'B')
				ac[2]++;
			else ac[1]++;
			//改变比分
			a_w++;
		}
		else if (ret == -1) {
			//统计用哪个赢的
			if (b == 'C')
				bc[0]++;
			else if (b == 'B')
				bc[2]++;
			else bc[1]++;
			//改变比分
			b_w++;
		}
		else p++;
	}
	char m, n;
	if (ac[2] >= ac[1] && ac[2] >= ac[0])
		m = 'B';
	else if (ac[0] >= ac[1])
		m = 'C';
	else m = 'J';
	if (bc[2] >= bc[1] && bc[2] >= bc[0])
		n = 'B';
	else if (bc[0] >= bc[1])
		n = 'C';
	else n = 'J';
	printf("%d %d %d\n%d %d %d\n%c %c", a_w, p, b_w, b_w, p, a_w, m, n);
}