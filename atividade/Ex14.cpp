#include<stdio.h>
main(){
	float sal, conta1, conta2;
	printf("Digite o seu salario: ");
	scanf("%f", &sal);
	printf("Digite o valor da conta 1: ");
	scanf("%f", &conta1);
	printf("Digite o valor da conta2: ");
	scanf("%f", &conta2);
	sal = sal - ((conta1*1.02)+(conta2*1.02));
	printf("seu salario final: %.2f", sal);
}
