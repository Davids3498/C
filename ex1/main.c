#include <stdio.h>
#include "myMath.h"

int main(){
	double in=0;
	printf("Please enter a number: ");
	if(scanf("%lf", &in)==0){
		printf("you didnt entered a number.\n");
		return -1;
	}
	double e = Exponent((int)in);
	double pow3 = Power(in , 3);
	float addf = add((float)e , (float)pow3); 
	float ans1 = sub(addf , 2);
	
	printf("The value of f(x) = e^x+x^3-2 is: %.4f\n" , ans1);
	
	double mul3 = mul(in , 3);
	double pow2 = Power(in , 2);
	float mul2 = mul((float)pow2 , 2);
	float ans2 = add((float)mul3 , mul2);
	
	printf("The value of f(x) = 3x+2x^2 is: %.4f\n" , ans2);
	
	float mul4 = mul((float)pow3 , 4);
	double div5 = div((double)mul4 , 5);
	float mult2 = mul((float)in , 2);
	float ans3 = sub((float)div5 , mult2);
	
	printf("The value of f(x) = (4x^3)/5-2x is: %.4f\n" , ans3);
	return 0;
}