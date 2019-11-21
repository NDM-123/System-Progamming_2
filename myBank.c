include <stdio.h>
#include <math.h>
#define accounts 50

int main() {
do{
	static double[][] = new double[accounts][2];
    char Exit;
printf("Menu: press the number of function you want /n ");

	printf("1) open bank acount/n 2)getBalance /n 3)setDeposit /n 4)withdrawl /n 5)close /n 6)intrest /n 7)printAll /n 8)closeAll");
    scanf("%c", &Exit);
    
    


	

switch (Exit ) {
	

			
case O
void open(double[][] a,double amount) {
	printf("insert a number that you want to save in your bank account");
	scanf(%lf,amount);
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
void getBalance(double a[][], int id) {
	printf("insert a number that you want to save in your bank account");
	scanf(%d, id);
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
void setDeposit(double a[][], int id, double deposit) {
	printf("insert a number that you want to save in your bank account");
	scanf(%lf,%d, deposit, id);
	bool flag = false;
	for (int i = 0; i < accounts; i++) {
		if (a[i][0] == id)a[i][1] += deposit;
		flag = true;
		printf("The new account is %f", &a[i][1]);
	}
	if (!flag)printf("the account dosent exist");	
}
case W
void withdrawl(double a[][], int id, double amount) {
	printf("insert a number that you want to save in your bank account");
	scanf(%lf, %d, amount, id);
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
void close(double[][] a, int id) {
	printf("insert a number that you want to save in your bank account");
	scanf(%d, id);
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
void interest(double[][] a, int ribit) {
	printf("insert a number that you want to save in your bank account");
	scanf(%d, ribit);
	ribit /= 100;
	ribit += 1;
		for (int i = 0; i < accounts; i++)
		{
			if (a[i][0] != 0)a[i][1] += ribit;
		}
	}
case P
void printAll(double[][] a) {
	for (int i = 0; i < accounts; i++){
		if (a[i][0] != 0) {
			printf("The amount in the account %f is: %f ", &a[i][0], &a[i][1]);

		}

	}
}
case E
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
while(Exit!=E);

exit();
}
