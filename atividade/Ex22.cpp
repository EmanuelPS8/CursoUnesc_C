#include<stdio.h>
main(){
	int num, suc, ant;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	suc = num + 1;
	ant = num - 1;
	printf("Sucessor: %d\nAntecessor: %d\n", suc, ant);
}
