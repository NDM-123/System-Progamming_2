#include <stdio.h>
#include <math.h>
#define accounts 50

int main() {
do{
	static double a[][] = new double[accounts][2];
    char Exit;
printf("Menu: press the number of function you want /n ");

	printf("O) open bank acount/n B)getBalance /n D)setDeposit /n W)withdrawl /n C)close /n I)intrest /n P)printAll /n F)closeAll");
    scanf("%c", &Exit);
    
    


	

switch (Exit ) {
	

			
case O
double amount=0.0;
scanf(%lf,amount);

open(a,amount);
void open(double[][] a,double amount) {
	printf("insert a number that you want to save in your bank account");
	int count = 901;
	if (!isFull(double[][] a)) {
		for (int i = 0; i < accounts; i++)
		{
			if (a[i][0] == 0) {
				a[i][0] = count;
				a[i][1] = amount;
				printf("The new account number is %f", &count);

			}
			count++;
		}
		count = 901;
	}
	else {
		printf("the bank is full");
	}
}
bool isFull(double[][] a) {
	for (int i = 0; i < accounts; i++)
	{
		if (a[i][0] == 0) return true;
	}
	return false;
}
case B
int id;
scanf(%d, id);

getBalance(a,id};
void getBalance(double a[][], int id) {
	printf("insert a number that you want to save in your bank account");
	for (int i = 0; i < accounts; i++) {
		bool flag = false;
		if (a[i][0] == id) {
			printf("your balance is: %f", &a[i][1]);
			flag = true;
		}
		if (!flag)printf("the account is closed");
	}
}
case D
int id;
 double deposit;
scanf(%lf,%d, deposit, id);
setDeposit(a, id, deposit);
void setDeposit(double a[][], int id, double deposit) {
	printf("insert a number that you want to save in your bank account");
	bool flag = false;
	for (int i = 0; i < accounts; i++) {
		if (a[i][0] == id)a[i][1] += deposit;
		flag = true;
		printf("The new account is %f", &a[i][1]);
	}
	if (!flag)printf("the account dosent exist");	
}
case W
 int id;
 double amount;
	scanf(%lf, %d, amount, id);
withdrawl(a,id,amount);
void withdrawl(double a[][], int id, double amount) {
	printf("insert a number that you want to save in your bank account");
	bool flag = false;
	for (int i = 0; i < accounts; i++)
	{
		if (a[i][0] == id) {
			if ((a[i][1] - amount) >= 0) {
				a[i][1] -= amount;
				printf("The amount in your account is: %f", &a[i][1]);
			}
		}
		else {
			printf("The account dosent exist");
		}
	}
}
case C
int id;
	scanf(%d, id);
close( a,  id);
void close(double[][] a, int id) {
	printf("insert a number that you want to save in your bank account");
	bool flag = false;
	for (int i = 0; i < accounts; i++) {
		if (a[i][0] == id) {
			a[i][0] = 0;
			a[i][1] = 0;
			flag = true;
		}
	}
	if (!flag)printf("The account dosent exist");
}
case I
int ribit;
	scanf(%d, ribit);
interest( a,ribit) ;
void interest(double[][] a, int ribit) {
	printf("insert a number that you want to save in your bank account");
	ribit /= 100;
	ribit += 1;
		for (int i = 0; i < accounts; i++)
		{
			if (a[i][0] != 0)a[i][1] += ribit;
		}
	}
case P
printAll(a);
void printAll(double[][] a) {
	for (int i = 0; i < accounts; i++){
		if (a[i][0] != 0) {
			printf("The amount in the account %f is: %f ", &a[i][0], &a[i][1]);

		}

	}
}
case F
cloesAll(a);
void cloesAll(double[][] a) {
	for (int i = 0; i < accounts; i++)
	{
		if (a[i][0] != 0) {
			a[i][0] = 0;
			a[i][1] = 0;
		}
	}
	printf("All accounts are closed");
}
case defult
(
			printf("you enterd a unliglle number");
			}

}while(Exit!=E);

exit();
}
