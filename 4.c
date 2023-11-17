#include <stdio.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char string[100];
    int count = 0;

    printf("Enter your String: ");
    scanf("%s", &string);

    for (int i = 0; i < strlen(string); i++)
    {
        char c = tolower(string[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }

    printf("Number of vovels in given string \"%s\": %d", string, count);
}