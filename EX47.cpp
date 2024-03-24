#include<stdio.h>
main(){
	float precof, lucro, impostos, final;
	printf("Preco de fabrica: ");
	scanf("%f", &precof);
	printf("Percentual de lucro do distribuidor: ");
	scanf("%f", &lucro);
	printf("Percentual de impostos: ");
	scanf("%f", &impostos);
	lucro=precof*lucro;
	impostos=precof*impostos;
	final=precof+lucro+impostos;
	printf("Lucro distribuidar: R$%.2f\nValor de impostos: R$%.2f\nPreco final: %.2f",lucro, impostos,final);
	
}
