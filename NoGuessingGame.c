#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int randomNumber, guess, attempts = 0;

    // Seed random number generator and generate a number between 1 and 100
    srand(time(0));
    randomNumber = rand() % 100 + 1;

    printf("Guess the number (between 1 To 100):\n");

    // Loop until the user guesses the correct number
    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;  // Count the number of attempts

        // Provide feedback
        if (guess > randomNumber) {
            printf("Lower number please.\n");
        } else if (guess < randomNumber) {
            printf("Higher number please.\n");
        }
    } while (guess != randomNumber); // Repeat until the guess is correct

    // Congratulate the user
    printf("Congratulations! You guessed the number %d in %d attempts.\n", randomNumber, attempts);

    return 0;
}

