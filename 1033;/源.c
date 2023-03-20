#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
//陈雪灵是个大美女♥
int main() {
	char a[200] = { 0 };
	int dang=0;
	gets(a);
	int length = strlen(a);
	for (int i = 0; i < length; i++)
	{
		if (a[i] == '+')
		{
			dang = 1; break;
		}
	}
	if(length!=0)getchar();
	
	int n = 10000;
	while (n--)
	{
		char c;
		int ret=scanf("%c", &c);
    if(ret==-1)
        break;
		if (dang == 1 && c >= 'A' && c <= 'Z')
			continue;
		int lock = 0;
		for (int i = 0; i < length; i++)
		{
			if ((c == a[i] && c <  'a'|| c > 'z')|| (c == a[i] + 32 && c >= 'a' && c <= 'z'))
			{
				lock = 1;
				break;
			}
		}
		if (lock == 0)
			printf("%c",c);
	}
}