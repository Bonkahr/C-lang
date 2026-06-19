#include <stdio.h>

/*
    * Reverse the numbers of a given integer.
    * eg, 1234567 -> returns 7654321
*/

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int revNumber = 0;
    
    while(num){
        revNumber = revNumber * 10 + num % 10;
        num = num / 10;
    }
    
    printf("Reversed number is %d", revNumber);
    
    return 0;
}