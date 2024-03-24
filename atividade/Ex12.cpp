#include<stdio.h>
main(){
	float sal_min = 1412;
	float sal, qtd_sal;
	printf("Digite seu salario atual: ");
	scanf("%f", &sal);
	qtd_sal = sal/sal_min;
	printf("Voce recebe %.2f salarios minimos!!", qtd_sal);
}
