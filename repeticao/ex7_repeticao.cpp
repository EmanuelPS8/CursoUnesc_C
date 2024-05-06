#include<stdio.h>
int main() {
	int soma;
	for(int i = 100; i<=105; i++){
		printf("%d \n", i);
		soma = soma + i;
	}
	printf("A soma e: %d", soma);
}
