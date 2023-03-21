#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, m[5];
    char c, symbols[3][10][5] = { 0 };
    for (int i = 0; i < 3; i++)
    {
        for (int index = 0; (c = getchar()) != '\n';)
            if (c == '[')
                scanf("%[^]]", symbols[i][index++]);
    }
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        int lock = 1;
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", m + j);
        }
        if (m[0] > 0 && m[0] <= 10 && *symbols[0][--m[0]]
            && m[1] > 0 && m[1] <= 10 && *symbols[1][--m[1]]
            && m[2] > 0 && m[2] <= 10 && *symbols[2][--m[2]]
            && m[3] > 0 && m[3] <= 10 && *symbols[1][--m[3]]
            && m[4] > 0 && m[4] <= 10 && *symbols[0][--m[4]])
            printf("%s(%s%s%s)%s\n",
                symbols[0][m[0]],
                symbols[1][m[1]],
                symbols[2][m[2]],
                symbols[1][m[3]],
                symbols[0][m[4]]);
        else printf("Are you kidding me? @\\/@\n");
    }
}