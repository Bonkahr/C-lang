#include <stdio.h>

//ARRAYS.

// One dimensional arrays.

int main()
{
    int num[100];

    for (int i=0; i < 100; i++)
    {
        num[i] = i * 3;
    }
    
    printf("Values of the array num are: \n");

    for (int i=0; i <= 20; i++)
    {
        printf("\tValue at num[%d]: %d\n", i, num[i]);
    }

    // Multi dimensional arrays

    int sales[4][5];

    for (int i = 0; i <= 4; i++) 
    {
        for (int j = 0; j <= 5; j++)
        {
            sales[i][j] = j + 10 * 50;
        }
    }

    // Accessing the elements
    printf("Elements of our 2-d arrays are:\n");
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            printf("\tElement at sales[%d][%d]: %d\n", i, j, sales[i][j]);
        }
    }

    // Arrays created at initialization

    int my_arr[5] = {0, 1, 2, 3, 4};


    printf("Elements of our initialized array are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\t Element at my_arr[%d]:%d\n", i, my_arr[i]);
    }

    // Character & strings arrays.
    // Note the null character at the end of the characters - it's the only way C to know the end of the string.

    char name[] = {'E', 'D', 'W', 'A', 'R', 'D', '\0'};

    // printing out the string

    printf("The string is: ");

    for (int i = 0; i < 6; i++)
    {
        printf("%c", name[i]);
    }

    printf("\n");
}