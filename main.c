#include <stdio.h>
#include "myBank.h"

int main() {
	char Exit;//holds the input
	int id;//the account id number
	double deposit;//money to enter into an account
	double amount;//sum of money in an account
	int ribit;//add interest to account
	





	//menu-asking the user to give an action he wants to do
	do {
        printf("\nMenu: \tInsert the capital letter for function you want \n ");
        printf("1)'O' Open bank account \n"
               " 2)'B' Get Balance of bank account \n "
               "3)'D' Set Deposit in bank account \n "
               "4)'W' Withdrawl from bank account \n "
               "5)'C' Close bank account\n"
               " 6)'I' Add interest to all bank accounts \n"
               " 7)'P' Print All bank accounts \n "
               "8)'E' Close All bank accounts and exit program\n");
	scanf(" %c", &Exit);
		switch (Exit) {


		case 'O':
			printf("Insert the amount that you want to save in your bank account\n");
			scanf(" %lf", &amount);
			open(amount);
			break;
		case 'B':
			printf("Insert the number of your bank account\n");
			scanf(" %d", &id);
			getBalance(id);
			break;
		case 'D':
            printf("Insert your bank id account\n");
			printf("and then insert the amount that you want to save in your bank account\n");
			scanf(" %d %lf", &id, &deposit);
			setDeposit(id,deposit);
			break;
		case 'W':
            printf("Insert your bank id account\n");
            printf("and then insert the amount that you want to withdrawl from your bank account\n");

			scanf(" %d %lf", &id ,&amount);
			withdrawl(id,amount);
			break;
		case 'C':
			printf("Insert the number of your bank account\n");
			scanf(" %d", &id);
			close(id);
			break;
		case 'I':
			printf("Insert the number(integer kind) of interest that will be added to all accounts\n");
			scanf(" %d", &ribit);
			interest(ribit);
			break;
		case 'P':
			printAll();
			break;
		case 'E':
			closeAll();
			break;
		
	 	default:
				 printf("Error invalid char\n");
			break;
		
	}
		}
	while (Exit != 'E');
	return 0;
}
