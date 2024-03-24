#include<stdio.h>
main(){
	char nome[30], descricao[45];
	float freq, media;
	printf("Informe os dados de uma disciplina");
	printf("Nome: ");
	scanf("%s", &nome);
	printf("Descricao: ");
	scanf("%s", &descricao);
	printf("Frequencia: ");
	scanf("%f", &freq);
	printf("Media: ");
	scanf("%f", &media);
	printf("Nome: %s\nDescricao: %s\nFrequencia: %.2f\nMedia: %.2f\n", nome, descricao, freq, media);
}
