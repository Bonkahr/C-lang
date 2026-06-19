#include <stdio.h>

int main(){
    printf("Hello there!\n");

    int marks;
    printf("Kindly input your marks: ");
    scanf("%d", &marks);

    //String grade;

    if (marks >= 90) {
        printf("Marks %d, our grade is: A \n", marks);
    }
    else if (marks >= 80) {
        printf("Marks %d, your grade is: B \n", marks);
    }
    else if (marks >= 70) {
        printf("Marks %d, your grade is: C \n", marks);
    }
    else {
        printf("Marks %d, your grade is: F \n", marks);
    }

    int floater = 985.67;
    printf("Floater: %d\n", floater);

    int a = 6;
    int b = a++;

    printf("Value of a: %d value of b: %d\n", a, b);

    int x, y, z;

    z = (x = 10, y = 20, x + y);

    printf("The value of z: %d\n", z);

    printf("The size of int z in memory is: %zu\n", sizeof(z));

    char val = 1;
    printf("Char val: %c", val);

    return 0;
}
