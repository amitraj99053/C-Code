// without time random no guessing game

#include <stdio.h>
#include <stdlib.h>

int main() {
    int secretNumber, guess, numGuesses = 0;

    // Generate a random number between 1 and 100
    secretNumber = rand() % 100 + 1;

    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        numGuesses++;

        if (guess < secretNumber) {
            printf("Higher number please!\n");
        } else if (guess > secretNumber) {
            printf("Lower number please!\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", numGuesses);
        }
    } while (guess != secretNumber);

    return 0;
}
