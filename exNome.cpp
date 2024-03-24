#include<stdio.h>
main() {
	char nac,nome[30];
	printf("Digite B para brasieiro e E para estrangeiro: ");
	scanf("%c", &nac);
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	printf("Sua nacionalidade e: %c\n", nac);
	printf("Seu nome e: %s", nome);
}
