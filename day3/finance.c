#include <stdio.h>
#define MAX_RECORDS 100 // Maximum number of records


// Arrays to store income and expense records
float income_records[MAX_RECORDS];
float expense_records[MAX_RECORDS];

// Counters to track the number of income and expense records
int choice;
int income_count = 0;
int expense_count = 0;

// Functions to add income and expense records
void add_income();
void add_expense();
void display_summary();

int main(void) {

	do 
	{
		printf("Welcome to Your Finance Tracker\n");
		printf("1. Add Income\n");
		printf("2. Add Expense\n");
		printf("3. Display Summary\n");
		printf("4. Exit\n");

		// Prompts user for their choice
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice) {
			case 1:
				add_income();
				break;
			case 2:
				add_expense();
				break;
			case 3:
				display_summary();	
				break;
			case 4:
				printf("You have chosen to exit.\n");
				break;
			default:
				printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 4);

	if (choice == 4) {
		printf("Goodbye!\n");
	}

	
}

// Definitions of functions for adding income and expense records
void add_income() {
	if (income_count < MAX_RECORDS) {
		float amount;
		printf("Enter the amount of income: ");
		scanf("%f", &amount);
		income_records[income_count] = amount;
		income_count++;
		printf("Income record added successfully.\n");
	} else {
		printf("Maximum number of income records reached.\n");
	}
}

void add_expense() {

	// Check if the maximum number of expense records has been reached
	if (expense_count < MAX_RECORDS) {
		float amount;
		printf("Enter the amount of expense: ");
		scanf("%f", &amount);
		expense_records[expense_count] = amount;
		expense_count++;
		printf("Expense record added successfully.\n");
	} else {
		printf("Maximum number of expense records reached.\n");
	}
}

void display_summary() {
	// Calculate the total income and expense
	float total_income = 0;
	float total_expense = 0;
	float balance = 0;

	// Sum up the income and expense
	for (int i = 0; i < income_count; i++) {
		total_income += income_records[i];
	}

	//Sum up the income and expense
	for (int i = 0; i < expense_count; i++) {
		total_expense += expense_records[i];
	}
	

	//Display the summary
	printf("---Financial Summary---\n");
	printf("Total Income: %.2f\n", total_income);
	printf("Total Expense: %.2f\n", total_expense);
	printf("Balance: %.2f\n", total_income - total_expense);
	
	// Check if there is a surplus or deficit
	if (total_income > total_expense) {
		printf("Congratulations! You have a surplus of %.2f.\n", total_income - total_expense);
	} else if (total_income < total_expense) {
		printf("Oh no! You have a deficit of %.2f.\n", total_expense - total_income);
	} else {
		printf("You have an equal surplus and deficit of %.2f.\n", total_income - total_expense);

	}
}
