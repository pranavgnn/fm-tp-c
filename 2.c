#include <stdio.h>

void main()
{
    char string[100];
    int integer;
    char character;
    double doubleNumber;

    printf("Input String: ");
    scanf("%s", &string);

    printf("Input Integer: ");
    scanf("%d", &integer);

    printf("Input Character: ");
    scanf("%c", &character);

    printf("Input Double: ");
    scanf("%lf", &doubleNumber);

    printf("Inputted String: %s\n", string);
    printf("Inputted Integer: %d\n", integer);
    printf("Inputted Character: %c\n", character);
    printf("Inputted Double: %lf", doubleNumber);
}