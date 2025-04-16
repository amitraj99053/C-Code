/*   Number Guessing Game
We will write a program that generates a random number and 
asks the player to guess it. If the player’s guess is higher than 
the actual number, the program displays “Lower number 
please”. Similarly, if the user’s guess is too low, the program 
prints “Higher number please”. When the user guesses the 
correct number, the program displays the number of guesses 
the player used to arrive at the number. 
Hint: Use loop & use a random number generator. */
// with time

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secretNumber, guess, numGuesses = 0;

    // Seed the random number generator with the current time
    srand(time(0));

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
