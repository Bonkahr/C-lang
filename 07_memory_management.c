#include <stdio.h>
#include <stdlib.h>

/*
    * The dynamic Memory Allocation concept is utelized to solve the array problem.
    * An array is a set of values with a fixed number of elements.
    * You can't adjust  the size of an array once it has been declared. 
    * We use dynamic memory allocation to allocate memory during runtime.
    *  Functions used for memory allocations:
            * malloc()
            * calloc()
            * realloc(), and
            * free()
    * The functions are defined in <stdlib.h> header file.
*/

int main() 
{
    /* malloc()
        * used to allocate a single block of memeory with the specified size dynamically.
        * Returns a void pointer that can be cast to any type of pointer.
        * It doesn't perform memoery initialization during execution and it initially has a garbage value.
        * If memory is insufficient it returns NULL.
        * Defined by -> void *malloc(size_t number_of_bytes)
    */

    int *ptr;

    ptr = malloc(10 * sizeof(ptr));

    if (ptr != NULL) 
    {
        *(ptr + 7) = 80;
        printf("Value of the 8th integer is: %d\n", *(ptr + 7));
        printf("The address of 8th integer is: %u.\n", (ptr + 7));
    }
    free(ptr);

    /* calloc()
        * Used to dynamically allocate the specified number of blocks of memory of the specified type.
        * The malloc() functions allocates memory and leaves it uninitalized, calloc() function allocates memory and initalizes all bits with zero.
        * It returns NULL if memory is not sufficient.
        * void *calloc(size_t num_elements, element_size)
    */

    /* realloc()
        * Used to re-allocate insufficient already allocated dynamic memory.
        * The re-allocation of memory maintains the already present values and new blocks are initialized with default garbage values.
        * void *realloc(void *ptr, size_t, new_size)
    */

    /* free()
        * The memory created using malloc() and calloc() are not de-allocated automatically on their own. You have to de-allocated them manually using the free() function
        * Syntax -> free(ptr) -> assumming the variable of the memory was ptr.
    */

    return 0;
}