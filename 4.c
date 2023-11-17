// include required header files
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    // declare / initialize required variables - a string to take user input and an integer to count the number of vowels
    char string[100];
    int count = 0;

    // take user input
    printf("Enter your String: ");
    scanf("%s", &string);

    // for loop that runs from 0-string length
    for (int i = 0; i < strlen(string); i++)
    {   
        // get the current iterating character
        char c = tolower(string[i]);

        //check if current character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++; // if it is, increment the count by 1
    }

    // print the final count after looping through every character
    printf("Number of vovels in given string \"%s\": %d", string, count);
}