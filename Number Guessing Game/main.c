#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(0));

    int randomNumber = (rand() % 100) + 1;
    int Number_of_Guesses = 0;
    int guessed;
   
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);

        if(guessed > randomNumber){
            printf("Guess Lower !!!\n");
        }
        else if(guessed < randomNumber){
            printf("Guess Higher Number.\n");
        }

        Number_of_Guesses++;

    } while (guessed != randomNumber);

    printf("CONGRATULATION!!! You guessed the Number in %d guesses!\n", Number_of_Guesses);
    
    return 0;
}
