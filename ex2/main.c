#include <stdio.h>
#include "myBank.h"

int main(){
	char c = '\0';
	double amount = 0;
	int acc = 0;
	double percent = 0;
	
	while (c != 'E'){
		printf("\nPlease choose a transaction type:\n"
			"O-Open Account\n"
			"B-Balance Inquiry\n"
			"D-Deposit\n"
			"W-Withdrawa\n"
			"C-Close Account\n"
			"I-Interest\n"
			"P-Print\n"
		"E-Exit\n");
		scanf(" %c", &c);
		switch(c){
			
			case 'O' : printf("Please enter amount for deposit: ");
			if(scanf("%lf", &amount) == 1){
				if(amount >= 0)
				TransO(amount);
				else
				printf("Invalid Amount\n");
			}
			else
			printf("Failed to read the amount\n");
			break;
			
			case 'B' : printf("Please enter account number: ");
			if(scanf("%d", &acc) == 1){
				if( (901 <= acc) && (acc <= 950)){
					TransB(acc);
				}
				else
				printf("Failed to read the account number\n");
			}
			else
			printf("Failed to read the account number\n");
			break;
			
			case 'D' : printf("Please enter account number: ");
			if(scanf("%d", &acc) == 1){
				if((901 <= acc) && (acc <= 950)){
					printf("Please enter the amount to deposit: ");
					if(scanf("%lf", &amount) == 1){
						if((amount >= 0)){
							TransD(acc, amount);
						}
						else
						printf("Cannot deposit a negative amount\n");
					}
				}
				else
				printf("Failed to read the account number\n");
			}
			else
			printf("Failed to read the account number\n");
			break;
			
			case 'W' : printf("Please enter account number: ");
			if((scanf("%d", &acc) == 1)) {
				printf("Please enter the amount to withdraw: ");
				if (scanf("%lf", &amount) == 1){
					if((901 <= acc) && (acc <= 950)){
					TransW(acc, amount);
					}
				}
			}
			else
			printf("Error please retray.\n");
			break;
			
			case 'C' : printf("Please enter account you would like to close.\n");
			if(scanf("%d", &acc) == 1){
				if((901 <= acc) && (acc <= 950)){
					TransC(acc);
				}
			}
			else
			printf("Please retray and enter a real account.\n");
			break;
			
			case 'I' : printf("Please enter interest rate: \n");
			if(scanf("%lf", &percent) == 1){
				TransI(percent);
			}
			else
			printf("Failed to read the interest rate\n");
			break;
			
			case 'P' : TransP();
			break;
			
			case 'E' : TransE();
			break;
			
			default : printf("Invalid transaction type\n"); 
			break;
		}
	}
	return 0;
}		