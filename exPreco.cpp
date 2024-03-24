#include<stdio.h>
main(){
	float preco, novo_preco;
	printf("Informe o preco: ");
	scanf("%f", &preco);
	novo_preco=preco*0.9;
	printf("novo preco: %f", novo_preco);
}
