#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER 100

char choice;

// function prototype
int randomNumber(void);
int playGame(void);


int main(void) 
{
	srand(time(0));

	do 
	{
	playGame();

	printf("Do you want to play again? (y/n): ");
	scanf(" %c", &choice);

	} while (choice == 'y' || choice == 'Y'); 
	
	printf("Thank you for playing game! Goodby.\n");
	return 0;
}

int randomNumber(void) 
{
	return rand() % MAX_NUMBER + 1;	
}

int playGame(void) 
{
	int number = randomNumber();
	int guess, attempts = 0;
	
	// Welcome user and pront the game instruction
	printf("Welcome to the Number Guessing Game!\n");
	printf("I have selected theb number between 1 and %d. Can you guess it?\n", MAX_NUMBER);

	// Looping through the game
	while(1) 
	{
		printf("Enter your Guess: ");
		scanf(" %d", &guess);
		attempts++;

		if (guess > number) 
		{
			printf("Too high! Try again.\n");

		} else if (guess < number) 
		{
			printf("Too low! Try again.\n");
		} else 
		{
			printf("Cngratulations! You've guessed the number %d in %d attmpts.\n", number, attempts);
			break;

		}

		// checks if the user has reached the 3 attempts
		if (attempts % 3 == 0)
		{
			printf("You've made %d attempts. Do you want to continue? (y/n)\n", attempts);
			scanf(" %c", &choice);

			if (choice == 'n' || choice == 'N')
			{	
				printf("Thank you for playing\n");
				printf("The number was %d. Better luck next time!\n", number);
				break;
			}
		} 
	} 
}
