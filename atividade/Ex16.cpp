#include<stdio.h>
main(){
	float largura, comprimento, m2;
	printf("Digite a largura do comodo: ");
	scanf("%f", &largura);
	printf("Digite o comprimeto do comodo: " );
	scanf("%f", &comprimento);
	m2 = largura*comprimento;
	printf("A area do comodo e: %.2f metros quadrados\nE a potencia necessario e: %.2f Watts", m2, m2*18);
}
