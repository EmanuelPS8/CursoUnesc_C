#include<stdio.h>
main(){
	int vendas;
	float comi, salario, preco;
	printf("Informe seu salario: ");
	scanf("%f", &salario);
	printf("Informe o valor das vendas: ");
	scanf("%f", &preco);
	printf("informe suas vendas: ");
	scanf("%d", &vendas);
	comi=(1.04*preco)*vendas;
	salario=salario+comi;
	printf("seu salario: %.2f, suas vendas: %d, sua comissao: %.2f", salario, vendas, comi);
	
}
