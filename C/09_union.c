#include <stdio.h>

/* Union
    * Union follow the same syntax as structures but they store all the member at the same location.
    * Each member in structure has own memory location, this is not the same in unions.
    * Declared using tje keyword "union".
    * Union can only handle one member at a time.
    * Unions are usually used to conserve memory, mostly on system programming.
    * Used is BIOS/DOS programming applications.
*/

int main()
{
    // Declaring a union

    union item
    {
        int m;
        int n;
        char c;
        
    }code; // Declares a variable code of type union item.

    /*  
        * In the code above, only 4 bytes are created for the unuion.
        * C creates enough memory to store the largest variable, in this case, the float which takes 4 bytes.
        * We use the same syntax as in structures to access the members.
    */

    // Accessing tje Union members. Consider the code below.

    code.c = 'q';
    code.m = 45;
    code.n = 90;

    printf("Wrong way to access Union members:");

    printf("\n\tQ: %c\n\tM: %d\n\tN: %d\n", code.c, code.m, code.n);

    /*
        * The code above gives erronious results depending on the machine. Hence not correct.
    */

    // We should only read or access members individually.
    // Unions are usiful to conserve memory for applications where only one member needs to be accessed.
    printf("\nCorrect way to access Union members:");

    code.c = 'Z';
    printf("\n\tQ: %c", code.c);

    code.m = 45;
    printf("\n\tQ: %d", code.m);

    code.n = 90;
    printf("\n\tQ: %d\n", code.n);


    return 0;
}