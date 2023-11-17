// include required header file
#include <stdio.h>

// function to swap the value of 2 variables using pointers
void swap(int *a, int *b)
{
    int t = *a; // initialize a variable t to hold the value of a
    *a = *b; // change the value of a to value of b
    *b = t; // change the value of b to the initial value of a, which is stored in t
}

// main function
void main()
{
    // initialize 2 variables for user input
    int a, b;

    // take user input
    printf("Input your two numbers (a b): ");
    scanf("%d %d", &a, &b);

    // swap the 2 variables using the above declared function
    swap(&a, &b);

    // print the swapped result
    printf("After pointer-swap:\na = %d\nb = %d", a, b);
}