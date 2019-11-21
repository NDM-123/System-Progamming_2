#ifndef _MYBANK_H_
#define _MYBANK_H_

//The ammount of accounts that is possible
#define accounts 50

void open(double[][] a, double b);		//open one account
bool isFull(double[][] a);				//get an id and return true if exist
void getBalance(double a[][], int id);		//get an account number and returns the balance if the account exist
void setDeposit(double a[][], int id, double deposit);			//set a deposit in an account if the account exist
void withdrawl(double a[][], int id, double amount);			//withdrawl money from the account if the account exist and it has enough money
void close(double[][] a, int id);								//close one account
void interest(double[][] a, int ribit);							//insert the money from the interest to all open bank accounts
void printAll(double[][] a);									//print all the open bank accounts numbers, and balance
void cloesAll(double[][] a);									//close all the bank accounts including erasing their balance

#endif