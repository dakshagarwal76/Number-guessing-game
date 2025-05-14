# Number Guessing Game 

## Overview
This is a simple **Number Guessing Game** written in **C**. The program randomly generates a number between 1 and 100 and prompts the user to guess the number. The game provides feedback on whether the guessed number is too high or too low, and it continues until the user guesses correctly. The program also tracks and displays the number of attempts taken to guess the correct number.

## Features
- **Random Number Generation**: The game generates a random number between 1 and 100 each time it starts.
- **User Feedback**: After each guess, the program informs the player whether their guess is too high or too low.
- **Attempts Counter**: The number of attempts is tracked and displayed once the user guesses the correct number.
- **Easy to Play**: Simple console input and output to play the game.

## How to Play
1. Clone the repository to your local machine.
2. Compile the C code using a C compiler (e.g., GCC).
3. Run the executable and start guessing numbers!
4. The program will tell you if your guess is too high or too low, and will congratulate you when you guess correctly.

## Example Output
```bash
🎯 Welcome to the Number Guessing Game!
I've picked a number between 1 and 100. Can you guess it?

Enter your guess: 50
Too high! Try a smaller number.

Enter your guess: 25
Too low! Try a bigger number.

Enter your guess: 37
🎉 Congratulations! You guessed the number in 3 attempts.
