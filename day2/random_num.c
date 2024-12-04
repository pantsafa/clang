#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int number, guess, attempts = 0;
const int MAX_NUMBER = 100;
char choice;

int randomNumber() {
	// Seed the random number generator
	srand(time(0));
	number = rand() % MAX_NUMBER + 1;
	return number;	
}

int playGame() {
	
	number = randomNumber();
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

		// checks if the user has reached the 3 attempts
		if (attempts % 3 == 0 && guess != number) {
			printf("You've made %d attempts. Do you want to continue? (y/n)\n", attempts);
			scanf("%c", choice);

			if (choice != 'y' && choice != 'Y') {
				printf("Thank you for playing\n");
				printf("The number is %d\n", number);
				return 0;
			}

		}
	} while (guess != number);
	
	return 0;

}

int main(void) {	
	
	// Welcome user and pront the game instruction
	printf("Welcome to the Number Guessing Game!\n");
	printf("I have selected theb number between 1 and %d. Can you guess it?\n", MAX_NUMBER);

	playGame();

	printf("Do you want to play again? (y/n): ");
	scanf(" %c", &choice);

	if (choice == 'y' || choice == 'Y') {
		playGame();
	} else {
		printf("Thank you for playing game!");

		return 0;
	}


	return 0;
}

