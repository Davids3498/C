#include "myMath.h"
#define exp 2.71828

double Exponent(int x){
		return Power(exp , x);
}
double Power(double x , int y){
	double pow=1;
	int i;
	
	if(y < 0){
		y = - y;
			for(i = 0 ; i < y ; i++)
		pow=x * pow;
	return (1/pow);
	}
	
	for(i = 0 ; i < y ; i++)
		pow=x * pow;
	return pow;
}