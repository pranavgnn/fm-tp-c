// include required header files
#include <stdio.h>
#include <stdlib.h>

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

// selection sort function which takes array, current index and array size as parameters
void selectionSort(int arr[], int i, int n)
{
    // lowest position and highest number variables for sorting purposes
    int lowestPos = i;
    int lowestNum = -1;

    // loop from i to n - 1
    for (int j = i; j < n; j++)
        // if current element is the first element to be iterated or if the element is lesser than the lowest number ever iterated
        if (lowestNum < 0 || arr[j] < lowestNum)
        {
            // change the lowest number to this and store its position in lowestPos
            lowestPos = j;
            lowestNum = arr[j];
        }

    // if lowestPos is greater than i, swap the two elements at respective indices
    if (lowestPos > i)
    {
        int t;
        t = arr[i];
        arr[i] = arr[lowestPos];
        arr[lowestPos] = t;
    }

    // if i greater than n, sorting is complete
    if (i >= n)
        return;

    // sorting incomplete, so continue sorting
    else
        selectionSort(arr, i + 1, n);
}

// main function
void main()
{
    // variables to store array elements, array length and user choice for sorting algo
    int arr[100], n, i, choice;

    // input array size from user
    printf("Enter the array size: ");
    scanf("%d", &n);

    // input array elements from user
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // input sorting algo choice from user
    printf("Enter 0 for bubble sort or 1 for selection sort: ");
    scanf("%d", &choice);
    
    // if user selected bubble sort, sort array using bubbleSort() function
    if (choice == 0)
        bubbleSort(arr, n);

    // else if user selected selection sort, sort array using selectionSort() function
    else if (choice == 1)
        selectionSort(arr, 0, n);

    // in case of invalid choice, let the user know and exit program
    else
    {
        printf("Invalid choice. Valid choices are 0 and 1.");
        exit(0);
    }

    // print the sorted array
    printf("The array after sorting: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}