#include <stdio.h>
#include "myBank.h"
#define startAcc 901

static double arr[50][2]= { 0 };
static int i = 0;

void TransO(double amount){
	int full = 1;
	for(i = 0 ; i  < 50 ; i++){
		if(arr [i][0] == 0){
			arr [i][0] = 1;
			printf("New account number is: %d\n" , (int)(startAcc+i));
			arr [i][1] = amount;
			full = 0;
			break;
		}
	}
	if(full)
		printf("All accounts are in use.\n");
	
}

void TransB(int account_number){
	if(arr[account_number-startAcc][0] == 1)
		printf("The balance of account number %d is: %.2lf\n", account_number, arr[account_number-startAcc][1]);
	else
		printf("This account is closed\n"); 
}

void TransD(int account_number, double amount){
	if(arr[account_number-startAcc][0] == 1){
		arr[account_number-startAcc][1] += amount;
		printf("The new balance is: %.2lf\n" , arr[account_number-startAcc][1]);
	}
	else
		printf("This account is closed\n");
}

void TransW(int account_number, double amount){
		if((arr[account_number-startAcc][0] == 1) && (arr[account_number-startAcc][1] >= amount)){
		arr[account_number-startAcc][1] -= amount;
		printf("The new balance is: %.2lf\n" , arr[account_number-startAcc][1]);
	}
	else
		printf("Cannot withdraw more than the balance\n");
}

void TransC(int account_number){
	if(arr[account_number-startAcc][0] == 1){
		arr[account_number-startAcc][1] = 0;
		arr[account_number-startAcc][0] = 0;
		printf("Your account have been closed.\n");
	}
	else
		printf("This account is already closed.\n");
}

void TransI(double intrest_rate){
	if(intrest_rate >= -100){
		for(i = 0 ; i < 50 ; i++){
			if(arr [i][0] == 1){
				arr[i][1] += ((arr[i][1]/100)*intrest_rate);
			}
		}
	}
	else
		printf("Can't enter intrest rate lower then '-100'.\n");
}

void TransP(){
	for(i = 0 ; i < 50 ; i++){
		if(arr [i][0] == 1){
			printf("The balance of account number %d is: %.2f\n", (int)(i+startAcc), arr[i][1]);
		}
	}
}

void TransE(){
	for(i = 0 ; i < 50 ; i++){
		arr[i][1] = 0;
		arr[i][0] = 0;
	}
}