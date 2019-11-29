#include <stdio.h>
#include "myBank.h"

//if there more than 50 acounts return 1.
    int isFull() {


	for (int i = 0; i < accounts; i++)

	{

		if (a[i][0] == 0) return 0;

	}

	return 1;

    }
//open new acount with given amount
			void open(double amount) {

				int count = 901;

				if (isFull()!=1) {

					for (int i = 0; i < accounts; i++) {

						if (a[i][0] == 0) {

							a[i][0] = count;

							a[i][1] = amount;

				printf("The new account number is %d\n", count);

				break;

						}

						count++;

					}

					count = 901;

				}

				else {

					printf("the bank is full\n");

				}

			}
			///return balanc of acount by it id
			void getBalance(int id) {

					int flag = 0;				

				for (int i = 0; i < accounts; i++) {


					if (a[i][0] == id) {

						printf("your balance is: %0.2lf\n", a[i][1]);

						flag = 1;

					}

				

				}
					if (flag==0)printf("the account is closed\n");

			}
///enter the given deposit to the given acount
			void setDeposit(int id, double deposit) {

				
				int flag = 0;

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] == id){

					    a[i][1] += deposit;

					flag = 1;

		printf("The new amount in the account is %0.2lf\n", a[i][1]);
				}
				}

				if (flag==0)printf("the account dosent exist\n");

			}
//draw given amount from given acount
			void withdrawl(int id, double amount) {
			int flag =0;

				
				for (int i = 0; i < accounts; i++)
				{

					if (a[i][0] == id) {

						if ((a[i][1] - amount) >= 0) {

							a[i][1] -= amount;
						flag=1;

			printf("The new amount in your account is: %0.2lf\n", a[i][1]);

						}

					}


				}
				if(flag==0)printf("the account dosent exist\n");
			}
//close the given acount
			void close(int id) {

			

				int flag = 0;

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] == id) {

						a[i][0] = 0;

						a[i][1] = 0;

						flag = 1;
						printf("The account %d had successfully been closed\n",&id);

					}

				}

				if (flag==0)printf("The account dosent exist\n");
			}
//enter an interest to acount
			void interest(int ribit) {
                double Nrib = (double)ribit;
				Nrib += 100;
				Nrib /= 100;

				for (int i = 0; i < accounts; i++)

				{

					if (a[i][0] != 0)a[i][1] *= Nrib;

				}
                printf("The interest had successfully been inserted to all accounts\n")
			}
//print all the database acounts details.
			void printAll() {

				for (int i = 0; i < accounts; i++) {

					if (a[i][0] != 0) {
					    int ac = (int)a[i][0];
			printf("The amount in the account %d is: %0.2lf\n ",ac, a[i][1]);

					}
				}

			}
///close all the database acounts
			void closeAll() {

				for (int i = 0; i < accounts; i++)

				{

					if (a[i][0] != 0) {

						a[i][0] = 0;

						a[i][1] = 0;

					}

				}

				printf("All accounts are closed\n");

			}





		


	


