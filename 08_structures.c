#include <stdio.h>

/* STRUCTURES
    * A structure is a collection of variable referenced under one name providing a convinient way of keeping related information together.
    * We use the 'struct' keyword to define/declare a structure.
    * We then define the data-types of each member of the structure.
*/


typedef struct 
    {
        char *name;
        int acc_no;
        float balance;
        char acc_type;
    } record;

void adjust(record *pt)
{
    pt->name = "James";
    pt->acc_no = 999999;
    pt->balance = 100.23;
    pt->acc_type = 'R';

    return;
};

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
    struct salary daniel = {
        "Daniel Mwende",
        "O & M",
        30000,
        {
            3000,
            5000,
            2000,
        },

    };

    printf("Daniel details are:\n");
    printf("\n\tName: %s\n\tDepartment: %s\n\tBasic salary: %d\nAllowances: \n\tUtility: %d\n\tRent: %d\n\tCommuter: %d\n", daniel.name, daniel.department, daniel.basic_pay, daniel.allowance.utility, daniel.allowance.rent, daniel.allowance.commuter);

    /* Structure with functions.
        * 3- ways to pass the values of structures in functions
            * Pass each element of a structure as a function call's actual rrgument
            * Pass the full structure to the call function as a copy. Changes in the new structure are not reflected in the called function copy.
            * Use of pointers to pass the structure as a argument. The memory address of the structure is passed as the arg.

        * Sending the structure as a copy;
            * data_type function_name(structure_variable_name) {};
    */

    // Passing as pointer

    void adjust(record * pt);

    static record customer = {"Smith", 3456, 34.56, 'S'};

    printf("Customer details are:\n");

    printf("\n\tName:%s\n\tAccount No: %d\n\t:Balance: %.2f\n\tAccount Type: %c\n", customer.name, customer.acc_no, customer.balance, customer.acc_type);

    return 0;
}
