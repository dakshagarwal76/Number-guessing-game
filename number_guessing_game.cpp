#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int number, guess, attempts = 0;

    // Initialize random number generator
    srand(time(0));
    number = rand() % 100 + 1;  // Random number between 1 and 100

    std::cout << "🎯 Welcome to the Number Guessing Game!" << std::endl;
    std::cout << "I've picked a number between 1 and 100. Can you guess it?" << std::endl;

    // Loop until the correct guess
    do {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess > number) {
            std::cout << "Too high! Try a smaller number." << std::endl;
        } else if (guess < number) {
            std::cout << "Too low! Try a bigger number." << std::endl;
        } else {
            std::cout << "🎉 Congratulations! You guessed the number in " << attempts << " attempts." << std::endl;
        }
    } while (guess != number);

    return 0;
}
