#include <stdio.h>
#include <string.h>
// #include <conio.h>

/*
    * Strings are stored in 
    * -> Fixed length structure,
    * -> Variable length structure, or
    * -> Linked structure.
    * We initilaize a string using double quotes. C creates a array for characters automatically. 
    * 
    * 

*/

int main()
{
    // String initialization

    char name[] = "Daniel Munene"; // Direct initialization

    char his_name[20];  // Create an arrays of chars

    strcpy(his_name, name); // copy name to his_name

    printf("The idiots name is: %s\n", name);

    if (strcmp(name, his_name)) // returns 0 which is false in C.
    {
        printf("The name are not the same.\n");
    }
    else
    {
        printf("The names are equal\n");
    }

    // String concatenation

    char greet[20] = "Hello, ";
    char full_greet[] = "Everyone";

    strcat(greet, full_greet); // appends eveyone to hello

    printf("I ask again %s.\n", greet);

    // Checking the length of a string

    printf("The length of greetings is: %ld\n", strlen(greet));

    // Using a for loop to assign chars in a string

    char source[] = "My Man where are you";
    char dest[40];

    for (int i = 0; ; i++)      // Note the loop will run forever untill it's broken on the if statement.
    {
        if (source[i] == '\0')
        
        {
            break;
        }
        
        dest[i] = source[i];
    }

    printf("Our strings: \n\tdest: %s, \n\tsource: %s.\n", dest, source);


    // Character string outputs and inputs function
    // The gets, and puts
    // The gets() function is deplicated and removed from as from C11. use fgets() as below.

    char user_input[50];

    printf("What is your name: ");
    fgets(user_input, sizeof(user_input), stdin);

    printf("Your name is: ");

    puts(user_input);

    /* String manipulation functions

        * strlen -> check the length of a string
        * strlwr -> Convert string to lowercase
        * strupr -> convert string to uppercase
        * strcat -> append a string to another
        * strncpy -> copy a string to a string character array
        * strncmp -> compare string sizes, 0- equal, 1 - first string is greater, -1->second string is greater
        * strrev -> reverse a string
        * strstr -> find the first occurence of a string to the other string.
    */

    return 0;
}
