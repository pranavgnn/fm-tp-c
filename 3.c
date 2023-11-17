// include required header file
#include <stdio.h>

void main()
{   
    // integer variable to store user input for line count
    int lineCount;

    // take the user input
    printf("Enter the number of lines: ");
    scanf("%i", &lineCount);

    // same as Q1 from here
    for (int i = 1; i <= lineCount; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}