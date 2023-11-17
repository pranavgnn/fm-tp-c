// include required header file
#include <stdio.h>

// define binary search function, taking in the array, array size and the element to be searched
int binarySearch(int *arr, int n, int element)
{
    // left, right, middle variables, used to binary search
    int left = 0;
    int right = n - 1;
    int middle;
    
    // loop until left is lesser than right
    while (left <= right)
    {
        // calculate the middle
        middle = (left + right) / 2.0;

        // if element is found at middle, return middle
        if (arr[middle] == element)
            return middle;

        // if element is lesser than the element at middle index, cut short the left interval
        else if (arr[middle] < element)
            left = middle + 1;
        
        // this means the element is greater than the element at the middle index, so cut short the right interval
        else
            right = middle - 1;
    }

    // element not found
    return -1;
}

// main function
void main()
{
    // required variables, taken from user input
    int arr[100], n, i, e;

    // input array size from user
    printf("Enter the array size: ");
    scanf("%d", &n);

    // input array elements from user
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // input search element from user
    printf("Enter the search element: ");
    scanf("%d", &e);

    // do the binary search and store the returned index in the pos variable
    int pos = binarySearch(arr, n, e);

    // if pos is -1, that means the element wasn't found in the array. Otherwise it means it was found
    if (pos < 0)
        printf("Element \"%d\" was not found in the array.", e);
    else
        printf("Element \"%d\" was found in the array at position %d.", e, pos);
}