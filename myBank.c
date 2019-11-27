#include <stdio.h>
#include "myBank.h"


int isFull() {


	for (int i = 0; i < accounts; i++)

	{

		if (a[i][0] == 0) return 0;

	}

	return 1;

}
			void open(double amount) {

			

				int count = 901;

				if (isFull()!=1) {

					for (int i = 0; i < accounts; i++) {

						if (a[i][0] == 0) {

							a[i][0] = count;

							a[i][1] = amount;

				printf("The new account number is %d", count);

				break;

						}

						count++;

					}

					count = 901;

				}

				else {

					printf("the bank is full");

				}

			}
			
			void getBalance(int id) {

					int flag = 0;				

				for (int i = 0; i < accounts; i++) {

				
				

					if (a[i][0] == id) {

						printf("your balance is: %lf", a[i][1]);

						flag = 1;

					}

				

				}
					if (flag==0)printf("the account is closed");

			}
			void setDeposit(int id, double deposit) {

				
				int flag = 0;

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] == id){a[i][1] += deposit;

					flag = 1;

					printf("The new account is %lf", a[i][1]);
				}
				}

				if (flag==0)printf("the account dosent exist");

			}
			void withdrawl(int id, double amount) {
			int flag =0;

				
				for (int i = 0; i < accounts; i++)
				{

					if (a[i][0] == id) {

						if ((a[i][1] - amount) >= 0) {

							a[i][1] -= amount;
						flag=1;

					printf("The amount in your account is: %lf", a[i][1]);

						}

					}


				}
				if(flag==0)printf("the account dosent exist");
			}
			void close(int id) {

			

				int flag = 0;

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] == id) {

						a[i][0] = 0;

						a[i][1] = 0;

						flag = 1;

					}

				}

				if (flag==0)printf("The account dosent exist");
			}
			void interest(int ribit) {

				
				ribit /= 100;

				ribit += 1;

				for (int i = 0; i < accounts; i++)

				{

					if (a[i][0] != 0)a[i][1] += ribit;

				}

			}
			void printAll() {

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] != 0) {

			printf("The amount in the account %lf is: %lf ",a[i][0], a[i][1]);



					}



				}

			}
			void closeAll() {

				for (int i = 0; i < accounts; i++)

				{

					if (a[i][0] != 0) {

						a[i][0] = 0;

						a[i][1] = 0;

					}

				}

				printf("All accounts are closed");

			}





		


	


