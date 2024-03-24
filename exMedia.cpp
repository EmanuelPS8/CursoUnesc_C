#include<stdio.h>
main(){
	float nota1, nota2, media;
	printf("Informe a nota 1: ");
	scanf("%f", &nota1);
	printf("informe a nota 2: ");
	scanf("%f", &nota2);
	media=(nota1 + nota2)/2;
	//tem que colocar a ordem q aparecem
	printf("sua media e: %.2f, suas notas foram n1: %.2f e n2: %.2f", media, nota1, nota2);
	
	}
