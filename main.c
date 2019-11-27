#include <stdio.h>
#include "myBank.h"

int main() {
	char Exit;
	int id;
	double deposit;
	double amount;
	int ribit;
	



	printf("1)'O' open bank acount \n 2)'B' getBalance \n 3)'D' setDeposit \n 4)'W' withdrawl \n 5)'C' close \n 6)'I' intrest \n 7)'P' printAll \n 8)'E' closeAll\n");

	
	do {
	printf("Menu: insert the capital letter for function you want \n ");
	scanf("%c", &Exit);
		switch (Exit) {


		case 'O':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%lf", &amount);
			open(amount);
			break;
		case 'B':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%d", &id);
			getBalance(id);
			break;
		case 'D':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%lf %d", &deposit, &id);

			setDeposit(id,deposit);
			break;
		case 'W':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%lf %d", &amount, &id);

			withdrawl(id,amount);
			break;
		case 'C':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%d", &id);
			close(id);
			break;
		case 'I':
			printf("insert a number that you want to save in your bank account\n");

			scanf("%d", &ribit);

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
