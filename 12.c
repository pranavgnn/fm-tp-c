// include required header file
#include <stdio.h>

// main function
void main()
{
    // create buffer for file read, and variable current for loop lateron
    char file[100], current;

    // variables for keeping track of word count and loop
    int wordCount = 0, i = 1;

    // pointer for reading file
    FILE* ptr;

    // read the file
    ptr = fopen("12-file.txt", "r");

    // write contents of the file to buffer
    fgets(file, 100, ptr);
    
    // initialize current variable
    current = file[i];
    
    // loop until the end of the stream
    while (current != '\0')
    {
        // if the current character is a space, one more word is counted
        if (current == ' ')
            wordCount++;

        // change current and i for next iteration
        current = file[i];
        i++;
    }
    
    // edge case where if the stream ends with a space, one more than the number is counted
    if (file[i - 2] != ' ')
        wordCount++;

    // print the number of words in the string
    printf("The word count in the file \"12-file.txt\" is %d.", wordCount);
}