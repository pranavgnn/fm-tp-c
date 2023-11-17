// include header files
#include <stdio.h>

// main function
void main()
{
    // initialize an integer to specify how many lines of pattern to be printed
    int lineCount = 5;

    // for loop from 1-lineCount
    for (int i = 1; i <= lineCount; i++)
    {
        // another for loop from 1-i
        for (int j = 1; j <= i; j++)
        {
            printf("*"); // print * on the i'th line j i times
        }

        printf("\n"); // go next line
    }
}