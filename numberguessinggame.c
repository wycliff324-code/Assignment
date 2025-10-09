/*
Name: Wycliff mutharimi
Reg No:CT101/G/26561/25
Description: A number guessing game
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand(time(0));           
	// Seed random number generator
    secret = rand() % 20 + 1; 
	
	// Choose random number between 1 and 20

    printf("Guess the number (between 1 and 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secret) {
            printf("Too high!try again!\n");
        } else if (guess < secret) {
            printf("Too low! try again!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}

 