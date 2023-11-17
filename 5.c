// include required header files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    // string variable to take user input
    char string[100];

    // take user input
    printf("Enter your String: ");
    scanf("%s", &string);

    // calculate string length and store it in an int variable
    int len = strlen(string);

    // for loop to iterate through every character in the string
    for (int i = 0; i < len; i++)
    {
        // current character from left
        char c1 = tolower(string[i]);
        // current character from right
        char c2 = tolower(string[len - i - 1]);

        // if left isn't equal to right, its not palindrome
        if (c1 != c2)
        {
            // print result
            printf("Not palindrome");
            // exit program
            exit(0);
        }
    }

    // if the code made it this far, it means the given string is palindrome
    printf("Palindrome");
}