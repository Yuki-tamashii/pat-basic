#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int arr[26] = { 0 };
	char s[1010] = { 0 };
	gets(s);
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			arr[s[i] - 'a']++;
		if(s[i] >= 'A' && s[i] <= 'Z')
			arr[s[i] - 'A']++;
	}
	int max=0;
	for (int i = 1; i < 26; i++)
	{
		if (arr[i] > arr[max])
			max = i;
	}
	char c;
	c = 'a' + max;
	printf("%c %d", c, arr[max]);
}