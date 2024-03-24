#include<stdio.h>
main(){
	int racao, qtd, consumo;
	printf("Peso do saco de racao(em kg): ");
	scanf("%d", &racao);
	printf("Quantidade de racao diaria por gato(em g): ");
	scanf("%d", &qtd);
	consumo = (racao * 1000)- (2*qtd*5);
	printf("Qtd de racao apos 5 dias: %d", consumo);
	
	
}
