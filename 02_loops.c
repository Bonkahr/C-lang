#include <stdio.h>

int main() 
{
    // for loops

    printf("My numbers:\n");

    for (int i = 0; i < 20; i++)
    {
        printf("\tNumber: %d\n", i);
    }

    // While loops

    int j = 20;

    printf("Initial value of j is: %d\n", j);
    while (j > 0)
    {
        printf("\t Value of j is now: %d\n", j);
        --j;
    }

    // do-while loops

    int k = 1;

    do
    {
        printf("The value of k is: %d\n", k);
        ++k;
    } while (k < 0);

    // Jump and break statements.

    int w = 20;

    printf("Initial value of j is: %d\n", w);
    while (w > 0)
    {
        printf("\t Value of j is now: %d\n", w);
        --w;

        if (w == 10) {
            break;
        }
    }
    
    // Continue statement
    int p = 20;

    printf("Initial value of j is: %d\n", p);
    while (p > 0)
    {
        if (p == 10 || p == 2) {
            --p;  
            continue;
        }

        printf("\t Value of j is now: %d\n", p);
        --p;        
    }

    // goto statement

    for (int i = 0; i < 10; i++)
    {
        if (i == 5) {
            goto STATUS;
        }
        printf("The value of i is: %d\n", i);

    }

    STATUS:
        printf("Jumper jumpeed and finished the execution.\n");

        return 0;
}