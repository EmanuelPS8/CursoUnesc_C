#include<stdio.h>
main(){
	float peso;
	printf("Seu peso: ");
	scanf("%f", &peso);
	printf("Se engordar 15: %.2f\n", peso*1.15);
	printf("Se emagrecer 20: %.2f", peso*0.8);
	
	
}
