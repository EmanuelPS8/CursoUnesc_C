#include<stdio.h>
main(){
	int vendas;
	float comi, salario;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("informe suas vendas: ");
	scanf("%d", &vendas);
	comi=1.04*vendas;
	salario=salario+vendas;
	printf("seu salario: %f, suas vendas: %f, sua comissao: %comi", salario, vendas, comi);
	
}
