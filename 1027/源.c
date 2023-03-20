#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main() {
    int n, i = 1, sum = 0;
    char c;
    scanf("%d %c", &n, &c);
    while (sum <= n)
    {
        sum += 2 * (2 * i - 1);
        if (i == 1)
            sum--;
        i++;
    }
    i--;
    for (int j = 0; j < i; j++)
    {
        for (int k = 0; k < j; k++)
            printf(" ");
        for (int k = j; k < (2 * i - 1 - j); k++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    for (int j = i - 1; j >= 0; j--)
    {   
        for (int k = 0; k < j; k++)
            printf(" ");
        for (int k = j; k < (2 * i - 1 - j); k++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}