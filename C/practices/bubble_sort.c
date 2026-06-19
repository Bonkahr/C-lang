#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main()
{
    srand(time(NULL));
    int numbers[SIZE];

    for (size_t i = 0; i < SIZE; ++i)
    {
        numbers[i] = rand() % 100 + 1;
    }

    puts("Data item in the original list:");

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", numbers[i]);
    }

    // bubble short the numbers.
    // loop to control number of passes
    for (int pass = 1; pass < SIZE; ++pass) 
    {
        // loop to control number of comparison per pass.
        for (size_t i = 0; i < SIZE; ++i)
        {
            //compare adjacent elements and swap them if 
            //first element is greater than the 2nd
            if (numbers[i] < numbers[i + 1])
            {
                int hold = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = hold;
            }
        }
    }

    puts("\n\nData item in ascending order");

    // output sorted array.
    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%4d", numbers[i]);
    }

    puts(" ");

    return 0;
}