#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char string[100];

    printf("Enter your String: ");
    scanf("%s", &string);

    int len = strlen(string);

    for (int i = 0; i < len; i++)
    {
        char c1 = tolower(string[i]);
        char c2 = tolower(string[len - i - 1]);

        if (c1 != c2)
        {
            printf("Not palindrome");
            exit(0);
        }
    }

    printf("Palindrome");
}