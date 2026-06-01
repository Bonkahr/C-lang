#include <stdio.h>

/* STRUCTURES
    * A structure is a collection of variable referenced under one name providing a convinient way of keeping related information together.
    * We use the 'struct' keyword to define/declare a structure.
    * We then define the data-types of each member of the structure.
*/

int main() 
{

    // Defining a structure.
     
    struct class
    {
        char name[30];
        int age;
        char class[20];
        char city[20];
    };

    struct class student_1;

    // Giving values to members.
    // We use the dot operator (.) to give values to members.

    printf("Kindly input details for student_1:Name, age, class and city:\n");
    scanf("%s %d %s %s", student_1.name, &student_1.age, student_1.class, student_1.city);

    printf("The student1 details are: \n");

    printf("\tName: %s\n\tAge: %d\n\tClass: %s\n\tCity: %s\n", student_1.name, student_1.age, student_1.class, student_1.city);

    // Initializing structure variables
    struct class student_2 = {"Martin", 12, "Grade Four", "Chuka"};

    
    printf("\nThe student2 details are: \n");

    printf("\tName: %s\n\tAge: %d\n\tClass: %s\n\tCity: %s\n", student_2.name, student_2.age, student_2.class, student_2.city);

    // Array structures.
    /*
        * To declare an array of structures, first the structure is defined then an array variable of that structure
        is declared. 
    */

    struct marks
    {
        int sub1;
        int sub2;
        int sub3;
        int total;
    };

    struct marks student[3] = { // decraring the student array.
        {34, 76, 54},
        {45, 65, 78},
        {67, 76, 34},
        {34, 89, 79},
    };

    // struct marks total;

    for (int i=0; i <= 2; i++)
    {
        student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
    };


    for (int i=0; i <= 2; i++)
    {        
        printf("\nStudent %d marks are as follows:\n", i + 1);
        printf("\tSubject 1: %d\n\tSubject Two: %d\n\tSubject Three: %d\n\tTotal: %d\n", student[i].sub1, student[i].sub2, student[i].sub3, student[i].total);
    };

    // Nested structures

    struct salary 
    {
        char name[20];
        char department[20];
        int basic_pay;

        struct {
            int utility;
            int rent;
            int commuter;
        } allowance;    // inner structure of allawance
    } employee[30];     // Decraring an array of 30 employees

    // initializing the members

    




    return 0;
}