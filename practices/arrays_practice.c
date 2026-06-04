#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>   // while compiling on linux systems add "-lm" (linker-libm) flag.
                    // gcc -wall -Wextra arrays_practice.c -o ../binaries/practices/arrays_practice -lm

#define SIZE 5  // Maximum size of hte array
#define STUDENTS 20


int main()
{
    int n[SIZE] = {23, 45, -234, 65, -23 };

    printf("%s%8s\n", "Element", "Value");

    for (size_t i = 0; i < SIZE; i++) 
    {
        printf("%7zu%8d\n", i+1, n[i]); // forcing the output string to have 7 and 8 chars respct.
    }


    // EXERCISE
    /*
    Twenty students were asked to rate the quality of the food in the student 
    cafete-ria on a scale of 1 to 5 (1 means awful, and 5 means excellent). 
    Place the 20 responses in an integer array and summarize the results of the poll.
    */

    int student_rating[STUDENTS];

    // randomizing the results for the rating using the srand and rand functions.
    
    srand(time(NULL));

    for (size_t i = 0; i < STUDENTS; i++)
    {
        student_rating[i] = (rand() % 5 + 1);
    }

    // Reading the results
    
    printf("\n%s", "STUDENT RATINGs: [");
    for (size_t i = 0; i < STUDENTS; i++)
    {
        printf(" %d,",student_rating[i]);
    }

    printf("]\n");

    // Calculating the mean score

    int total_rating = 0;

    for (size_t i = 0; i < STUDENTS; i++)
    {
        total_rating += student_rating[i];
    }

    int avarage = round((float)total_rating / STUDENTS);

    switch (avarage)
    {
    case 1:
        printf("\n%s, %s", "Students choice: 1", "Rating: Awful!\n");
        break;
    case 2:
        printf("\n%s, %s", "Students choice: 2", "Rating: Poor!\n");
        break;
    case 3:
        printf("\n%s, %s", "Students choice: 3", "Rating: Good!\n");
        break;
    case 4:
        printf("\n%s, %s", "Students choice: 4", "Rating: Great!\n");
        break;
    case 5:
        printf("\n%s, %s", "Students choice: 5", "Rating: Awesome!\n");
        break;
    default:
        printf("\n%s", "Students choice: UNDICIDED\n");
        break;
    }

    return 0;
}