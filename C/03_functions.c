#include <stdio.h>


float triangle_area(float h, float w){

    return 0.5f * h * w;
}

// Recursive functions. -> A function calling itself
// Rules -> The function must be written in recursive form
//       -> The function must include a stopping condition.

// Calculating the factorial of an int in recursive mode.

long fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}


int main()
{
    float height, width;

    printf("We will find the area of a triangle. Kindly input the height and the width of your triangle.\n");

    printf("\tHeight: ");
    scanf("%f", &height);

    printf("\n\tWidth: ");
    scanf("%f", &width);

    printf("\nThe area of your triangle is: %f\n", triangle_area(height, width));

    printf("Lets find the factorial of the number in your mind.\n");

    int number;

    printf("Kindly enter the number:");
    scanf("%d", &number);

    printf("Factorial:%ld\n", fact(number));

    return 0;
}

