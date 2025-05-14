#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    
    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    printf("🎯 Welcome to the Number Guessing Game!\n");
    printf("I've picked a number between 1 and 100. Can you guess it?\n");

    // Loop until the correct guess
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try a smaller number.\n");
        } else if (guess < number) {
            printf("Too low! Try a bigger number.\n");
        } else {
            printf("🎉 Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
