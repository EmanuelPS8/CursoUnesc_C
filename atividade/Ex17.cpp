#include<stdio.h>
main(){
	char nome[30];
	int idade;
	printf("Seu nome: ");
	gets(nome);
	printf("Sua idade: ");
	scanf("%d", &idade);
	printf("Nome: %s\nSua idade: %d", nome, idade);
}
