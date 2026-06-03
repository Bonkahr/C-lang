#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));  // create a random number using the time for unique number each run.

    int num = rand() % 100 + 1;     // generating a rando number.

    // printf("Random number: %d\n", num);

    int guess;

    printf("This is a guessing game, you will be guessing a number from 1 to 99\n");
    printf("\tKindly enter your first guess:");

    scanf("%d", &guess);
    int guesses = 1;

    while (1){
        while (num != guess)
        {
            if (num > guess)
            {
                printf("\nThe number you guessed is less that the number I have.\n");
                printf("\tKindly try again: ");
                scanf("%d", &guess);
                guesses++;
            }
            else
            {
                printf("\nThe number you guessed is bigger than the number I have\n");
                printf("\tKindly try again: ");
                scanf("%d", &guess);
                guesses++;
            }            
        
        }
        printf("Congrats! you guessed the correct number: %d after %d guesses.\n", num, guesses);

        printf("\nWould you like you continue play? Y/N? ");

        while ((getchar()) != '\n' && getchar() != EOF);    // clean the buffer for character scan.

        char play_again[5];
        fgets(play_again, sizeof(play_again), stdin);

        if (play_again[0] == 'y' || play_again[0] == 'Y')
            {
                srand(time(NULL));
                num = rand() % 100 + 1;
                guesses = 0;
                printf("\nGood choice!!\n\tEnter your first guess: ");
                scanf("%d", &guess);
            }
            else
            {
                printf("\nThank you for playing with us. See you soon.\n");
                break;
            }
        
    }

    return 0;
}
