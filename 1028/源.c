#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
	int n;
	scanf("%d", &n);
	int max[3] = { 0 }, min[3] = { 3000,0,0 }, count = n;
	char m[50] = { 0 }, m2[50] = { 0 };
	for (int i = 0; i < n; i++)
	{
		getchar();
		int a, b, c, j = 0;
		char name[50] = { 0 };
		while (1)
		{
			scanf("%c", &name[j]);
			if (name[j] == ' ')
				break;
			j++;
		}

		scanf("%d/%d/%d", &a, &b, &c);
		if (a > 2014)
		{
			count--;
			continue;
		}
		else if(a==2014&&b>9)
		{
			count--;
			continue;
		}
		else if(a==2014&&b==9&&c>6)
		{
			count--;
			continue;
		}
		else {
			if (a < 1814)
			{
				count--;
				continue;
			}
			else if(a==1814&&b<9) {
				count--;
				continue;
			}
			else if(a==1814&&b==9&&c<6)
			{
				count--;
				continue;
			}
		}

		if (a > max[0])
		{
			max[0] = a;
			max[1] = b;
			max[2] = c;
			strcpy(m, name);
		}
		else 	if (a == max[0] && b > max[1])
		{
			max[0] = a;
			max[1] = b;
			max[2] = c;
			strcpy(m, name);
		}
		else		if (a == max[0] && b == max[1] && c > max[2])
		{
			max[0] = a;
			max[1] = b;
			max[2] = c;
			strcpy(m, name);
		}
		if (a > min[0]);
		else if (a == min[0] && b > min[1]);
		else if (a == min[0] && b == min[1] && c > min[2]);
		else
		{
			min[0] = a;
			min[1] = b;
			min[2] = c;
			strcpy(m2, name);
		}

	}m2[strlen(m2)-1]='\0';
	m[strlen(m) - 1] = '\0';


		printf("%d %s %s", count, m2, m);
	
}