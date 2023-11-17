// include required header
#include <stdio.h>

void main()
{
    // variable declaration
    char string[100], character;
    int integer;
    double doubleNumber;

    // take string input
    printf("Input String: ");
    scanf("%s", &string);

    // take integer input
    printf("Input Integer: ");
    scanf("%d", &integer);

    // take character input
    printf("Input Character: ");
    scanf("%s", &character);

    // take double input
    printf("Input Double: ");
    scanf("%lf", &doubleNumber);

    // output all the inputs
    printf("Inputted String: %s\n", string);
    printf("Inputted Integer: %d\n", integer);
    printf("Inputted Character: %c\n", character);
    printf("Inputted Double: %lf", doubleNumber);
}