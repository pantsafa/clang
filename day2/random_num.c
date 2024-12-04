#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	int number, guess, attempts = 0;
	const int MAX_NUMBER = 100;


	// Seed the random number generator
	srand(time(0));
	number = rand() % MAX_NUMBER + 1;

	// Welcome user and pront the game instruction
	printf("Welcome to the Number Guessing Game!\n");
	printf("I have selected theb number between 1 and %d. Can you guess it?\n", MAX_NUMBER);
	
	// Looping through the game
	do {
		printf("Enter your Guess: ");
		scanf("%d", &guess);
		attempts++;

		if (guess > number) {
			printf("Too high! Try again.\n");


		} else if (guess < number) {
			printf("Too low! Try again.\n");
		} else {
			printf("Cngratulations! You've guessed the number %d in $d attmpts.\n", number, attempts);
		}
	} while (guess != number);

	return 0;
}

