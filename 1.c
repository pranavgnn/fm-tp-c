#include <stdio.h>

void main()
{
    int lineCount = 5;

    for (int i = 1; i <= lineCount; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}