#include <stdio.h>

void main()
{
    int lineCount;

    printf("Enter the number of lines: ");
    scanf("%i", &lineCount);

    for (int i = 1; i <= lineCount; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}