#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	char arr1[81] = { 0 }, arr2[82] = { 0 }, ans[200] = { 0 };
	scanf("%s%s",arr1, arr2);
	int i = 0, j = 0;
	while (i < strlen(arr1) && j < strlen(arr2))
	{
		if(!isalnum(arr1[i]))
			if (arr1[i] != '_')
			{
				i++;
					continue;
			}
		if (!isalnum(arr2[j]))
			if (arr2[j] != '_')
			{
				j++;
				continue;
			}
		if (arr1[i] == arr2[j])
			j++;
		else {
			int lock = 1;
			for (int k = 0; k < strlen(ans); k++)
			{
				if (arr1[i] == ans[k]|| (arr1[i] >= 97 && arr1[i] <= 122 && arr1[i] == ans[k] + 32))
				{
					lock = 0;
					break;
				}
			}
			if (lock == 1)
				if(arr1[i]>=97&&arr1[i]<=122)
					ans[strlen(ans)] = arr1[i]-32;
				else ans[strlen(ans)] = arr1[i];
		}
		i++;
	}
	printf("%s", ans);
}