#include<stdio.h>
main(){
	float escada, alt_desejada, alt_necessaria;
	
	printf("Altura do degrau: ");
	scanf("%f", &escada);
	printf("Altura desejada: ");
	scanf("%f", &alt_desejada);
	alt_necessaria = alt_desejada/escada;
	printf("Qtd de degraus: %.2f", alt_necessaria);
	
}
