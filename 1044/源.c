#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		char s[10] = { 0 };
		gets(s);
		if (strlen(s) <= 4 && !isalpha(s[0]))
		{
			int n = 0;
			for (int j = 0; j < strlen(s); j++)
			{
				n *= 10;
				n += s[j] - '0';
			}
			int g = 0, d = 0;
			d = n % 13;
			g = n / 13;
			if (n == 0)
				printf("tret");
			if (g != 0)
			{
				switch (g) {
				case 1:
					printf("tam");
					break;
				case 2:
					printf("hel");
					break;
				case 3:
					printf("maa");
					break;
				case 4:
					printf("huh");
					break;
				case 5:
					printf("tou");
					break;
				case 6:
					printf("kes");
					break;
				case 7:
					printf("hei");
					break;
				case 8:
					printf("elo");
					break;
				case 9:
					printf("syy");
					break;
				case 10:
					printf("lok");
					break;
				case 11:
					printf("mer");
					break;
				case 12:
					printf("jou");
					break;
				}
				if (d != 0)
				printf(" ");
			}
			if(d!=0)
			switch (d) {
			case 1:
				printf("jan");
				break;
			case 2:
				printf("feb");
				break;
			case 3:
				printf("mar");
				break;
			case 4:
				printf("apr");
				break;
			case 5:
				printf("may");
				break;
			case 6:
				printf("jun");
				break;
			case 7:
				printf("jly");
				break;
			case 8:
				printf("aug");
				break;
			case 9:
				printf("sep");
				break;
			case 10:
				printf("oct");
				break;
			case 11:
				printf("nov");
				break;
			case 12:
				printf("dec");
				break;
			}
			printf("\n");
		}
		else if (strlen(s) <= 4 && isalpha(s[0]))
		{
			if (!strcmp(s, "tret"))
				printf("0\n");
			else if (!strcmp(s, "jan"))
				printf("1\n");
			else if (!strcmp(s, "feb"))
				printf("2\n");
			else if (!strcmp(s, "mar"))
				printf("3\n");
			else if (!strcmp(s, "apr"))
				printf("4\n");
			else if (!strcmp(s, "may"))
				printf("5\n");
			else if (!strcmp(s, "jun"))
				printf("6\n");
			else if (!strcmp(s, "jly"))
				printf("7\n");
			else if (!strcmp(s, "aug"))
				printf("8\n");
			else if (!strcmp(s, "sep"))
				printf("9\n");
			else if (!strcmp(s, "oct"))
				printf("10\n");
			else if (!strcmp(s, "nov"))
				printf("11\n");
			else if (!strcmp(s, "dec"))
				printf("12\n");
			else if (!strcmp(s, "tam"))
				printf("13\n");
			else if (!strcmp(s, "hel"))
				printf("26\n");
			else if (!strcmp(s, "maa"))
				printf("39\n");
			else if (!strcmp(s, "huh"))
				printf("52\n");
			else if (!strcmp(s, "tou"))
				printf("65\n");
			else if (!strcmp(s, "kes"))
				printf("78\n");
			else if (!strcmp(s, "hei"))
				printf("91\n");
			else if (!strcmp(s, "elo"))
				printf("104\n");
			else if (!strcmp(s, "syy"))
				printf("117\n");
			else if (!strcmp(s, "lok"))
				printf("130\n");
			else if (!strcmp(s, "mer"))
				printf("143\n");
			else if (!strcmp(s, "jou"))
				printf("156\n");
		}
		else if (isalpha(s[0]))
		{
			char gao[4] = { 0 }, di[4] = { 0 };
			int sum = 0;
			for (int j = 4, i = 0; j < 8; j++)
				di[i++] = s[j];
			strncpy(gao, s, 3);
			if (!strcmp(gao, "tam"))
				sum = 13 * 1;
			else if (!strcmp(gao, "hel"))
				sum = 13 * 2;
			else if (!strcmp(gao, "maa"))
				sum = 13 * 3;
			else if (!strcmp(gao, "huh"))
				sum = 13 * 4;
			else if (!strcmp(gao, "tou"))
				sum = 13 * 5;
			else if (!strcmp(gao, "kes"))
				sum = 13 * 6;
			else if (!strcmp(gao, "hei"))
				sum = 13 * 7;
			else if (!strcmp(gao, "elo"))
				sum = 13 * 8;
			else if (!strcmp(gao, "syy"))
				sum = 13 * 9;
			else if (!strcmp(gao, "lok"))
				sum = 13 * 10;
			else if (!strcmp(gao, "mer"))
				sum = 13 * 11;
			else if (!strcmp(gao, "jou"))
				sum = 13 * 12;
			if (!strcmp(di, "tret"))
				sum += 0;
			else if (!strcmp(di, "jan"))
				sum += 1;
			else if (!strcmp(di, "feb"))
				sum += 2;
			else if (!strcmp(di, "mar"))
				sum += 3;
			else if (!strcmp(di, "apr"))
				sum += 4;
			else if (!strcmp(di, "may"))
				sum += 5;
			else if (!strcmp(di, "jun"))
				sum += 6;
			else if (!strcmp(di, "jly"))
				sum += 7;
			else if (!strcmp(di, "aug"))
				sum += 8;
			else if (!strcmp(di, "sep"))
				sum += 9;
			else if (!strcmp(di, "oct"))
				sum += 10;
			else if (!strcmp(di, "nov"))
				sum += 11;
			else if (!strcmp(di, "dec"))
				sum += 12;
			printf("%d\n", sum);
		}
	}
}