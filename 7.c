// include required header file
#include <stdio.h>

// bubble sort function which takes array and array size as parameters
void bubbleSort(int arr[], int n)
{
    // for loop that goes from 0-(array size - 1)
    for (int i = 0; i < n; i++)
    {
        // declare a temporary variable t to store if an element was swapped in this loop
        int t = 0;

        // another for loop that runs from 0 to n - i - 1
        for (int j = 0; j < n - i - 1; j++)
        {
            // if the first element is greater than second, swap
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                
                t = 1; // change swap variable to 1, indicating we swapped
            }
        }

        // if no more swapping is required, break
        if (t == 0) break;
    }
}

// main function
void main()
{
    // array to take user input, n for number of elements in array and i for loop variable
    int arr[100], n, i;
    
    // take user input for number of elements in array
    printf("Enter the array size: ");
    scanf("%d", &n);

    // take array elements input
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // bubble sort the array
    bubbleSort(arr, n);

    // print the sorted array
    printf("The array after sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}