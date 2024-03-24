#include<stdio.h>
main(){
	int med;
	printf("Digite uma medida em pes: ");
	scanf("%d", &med);
	printf("Polegadas: %d\nJardas:  %d\nMilhas:  %d", med*12, med*3, med*5280);
}
