#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>


int addProduct(void);
int addCustomer(void);
int addTransaction(void);
int viewLedger(void);


struct Product {
	char name[50];
	int quantity;
	double purchase_price;
	double salling_price;
	double profit;
};

struct Customer {
	char name[50];
	int phone;
	char address[100];
};

struct Transaction {
struct Customer customer[100];
	struct Product product[100];
	int quantity;
	double total_amount;
	double is_cash;
	double is_credit;
};

struct Ledger {
	struct Product product[100];
	struct Transaction transaction[100];
	int product_count;
	int transaction_count;
};	

struct Product product;
struct Customer customer;
struct Transaction transaction;
struct Ledger ledger;

int main(int argc, char *argv[]) {

	int choice = 0;
	
	while (choice != 5) {
		printf("1. Add Product\n");
		printf("2. Add Customer\n");
		printf("3. Add Transaction\n");
		printf("4. View Ledger\n");
		printf("5. Exit\n");
		scanf("%d", &choice);
	}
	
	switch (choice) {
		case 1:
			addProduct();
			break;
		case 2:
			addCustomer();
			break;
		case 3:
			addTransaction();
			break;
		case 4:
			viewLedger();
			break;
		case 5:
			exit(0);
			break;
	}



	return 0;
}

int addProduct(void) {
	char name[50];
	printf("Enter product name: ");
	scanf("%s %d %lf %lf", product.name, &product.quantity, &product.purchase_price, &product.salling_price);
}

int addCustomer(void) {
	scanf("%s %d %s", customer.name, &customer.phone, customer.address);
}

int addTransaction(void) {
	addCustomer();
	addProduct();
}

int viewLedger(string name) {
	
	printf("Enter customer name: ");
	scanf("%s", name);

	printf("-----Ledger Summary------\n");	
}
