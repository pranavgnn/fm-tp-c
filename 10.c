// include required header file
#include <stdio.h>

// function to calculate factorial of num
int factorial(int num)
{
    // if the number is greater than or equal to 1, return num times factorial of num - 1, otherwise return 1       
    return num >= 1 ? num * factorial(num - 1) : 1;
}

// main function
void main()
{
    // int variable to hold user input
    int num;

    // take user input
    printf("Enter the number: ");
    scanf("%d", &num);

    // calculate factorial (using recursion)
    int fact = factorial(num);

    // print the result
    printf("Factorial of %d is %d.", num, fact);
}