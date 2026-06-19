#include <stdio.h>

/*
    -> Pointers - It's a data type in C programming language which has a special characteristic to hold the adress of other memory location as it's value.
*/

int main()
{
    int n;      // Declaration of intager n
    int *ptr;   // Declaration of a pointer

    ptr = &n;   // Store the memory address of n in the pointer.

    n = 6;

    // Displaying the values

    printf("The pointer points to value of n: %d with the value of: %d\n", *ptr, n);

    // Acessing the Memory address of a int n
    printf("Memory adress of n: %u with value: %d\n", &n, n);

    // Acessing the Memory adress of the pointer and its value
    printf("Memory adress of pointer: %d, with value: %d\n", *ptr, *ptr);

    return 0;
}
