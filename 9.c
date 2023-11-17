// include required header file
#include <stdio.h>

// main function
void main()
{
    // variables to store array, and the sums required to compute
    int arr[4][4], i, j, totalSum = 0, d1Sum = 0, d2Sum = 0, dSum = 0;

    // input array elements from the user
    printf("Enter array elements: ");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);

    // for loops to iterate through every element of the array
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
        {
            // get current looping element given its indices i,j
            int current = arr[i][j];
            
            // add to the total sum
            totalSum += current;

            // primary diagonal
            if (i == j)
                d1Sum += current;

            // secondary diagonal
            else if (j == 3 - i)
                d2Sum += current;
        }
    // sum of elements of both diagonals
    dSum = d1Sum + d2Sum;

    // print the array elements
    printf("Array elements are: ");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 4; j++)
            printf("%d ", arr[i][j]);

    // print the computed sums
    printf("\n\nTotal sum of the matrix is: %d\n", totalSum);
    printf("Sum of the diagonal 1 elements is: %d\n", d1Sum);
    printf("Sum of the diagonal 2 elements is: %d\n", d2Sum);
    printf("Sum of both the diagonal elements is: %d\n", dSum);
}