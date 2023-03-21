#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<ctype.h>
#include<math.h>
int main() 
{
	int num, count = 0;
	double sum = 0;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		int wrong = 0, flag = 0;
		double n = 0, n2 = 0,e=0;
		char s[1024] = { 0 };
		scanf("%s", s);
		for (int i = 0; i < strlen(s); i++)
		{	
			if ((s[i] < '0' || s[i]>'9') && s[i] != '.'&&s[i]!='-')
				wrong = 1;
			if (flag == 0)
			{	
				if (s[i] == '-')
					continue;
				if (s[i] == '.')
				{
					flag = 1;
					continue;
				}
				n *= 10;
				n += s[i] - '0';
			}
			else
			{	
				if (s[i] == '.')
				{
					wrong = 1;
					break;
				}
				e++;
				double m = s[i]-'0';
				for (int i = 0; i < e; i++)
					m *= 0.1;
				n2 += m;
			}
			
		}
		if (n + n2 < -1000 || n + n2>1000)
			{
				wrong = 1; 
			}
		if ((long double)(n + n2) * 100 - (long double)(int)((n + n2) * 100)>0.0000001)
			wrong = 1;
		if (wrong == 1)
			printf("ERROR: %s is not a legal number\n", s);
		else
		{	
			if(s[0]=='-')
				sum -= n + n2;
			else sum += n + n2;
			count++;
		}
	}
	if (count == 0)
		printf("The average of 0 numbers is Undefined\n");
	else if (count == 1)
		printf("The average of 1 number is %.2f\n", sum/count+0.0000001);
	else printf("The average of %d numbers is %.2f\n", count, sum / count + 0.0000001);
}
