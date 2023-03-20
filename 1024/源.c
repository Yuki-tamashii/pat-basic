#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
	char num[10010], signal1, signal2;
	scanf("%s", num);
	signal1 = num[0];
	int pos = 1, j = 0;
	for (int i = 1; i < strlen(num); i++)
	{
		if (num[i] == 'E')
			break;
		pos++;
	}
	char n[10010] = { 0 };
	for (int i = 1; i < pos; i++, j++)
	{
		n[j] = num[i];
	}
	if (signal1 == '-')
		printf("%c", signal1);
	int zs = 0;
	for (int i = pos + 2; i < strlen(num); i++)
	{
		zs *= 10;//Ö¸Êý
		zs += num[i] - '0';
	}
	if (num[pos + 1] == '+')
	{	
		
		int i = 0;
		for (i; i < zs; i++)
		{
			if (n[2 + i] == '\0')
			{
				n[i + 1] = 48;
				continue;
			}
			n[1 + i] = n[2 + i];
		}
		if (n[2 + i] == '\0')
		{
			n[1 + i] = 0;
		}
		else  
			n[1 + i] = '.'; 
		i = 0;
		while (n[i] != 0)
			if (n[i + 1] != '.' && n[i] == 48)
			{
				int j = 0;
				while (n[j] != 0)
					n[j] = n[1 + j++];
			}
			else break;
		printf("%s", n);
	}
	else
	{
		if (zs == 0)
		{
			printf("%s", n);
			return 0;
		}
		char temp[1024] = { 0 };
		temp[0] = '0';
		temp[1] = '.';
		int i = 1;
		for (i; i < zs; i++)
			temp[1 + i] = '0';
		for (int k = 0; k < strlen(n); k++)
		{
			if (n[k] == '.')
				continue;
			temp[i + 1] = n[k];
			i++;
		}
		printf("%s", temp);
	}

}