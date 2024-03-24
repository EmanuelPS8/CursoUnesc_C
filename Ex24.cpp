#include<stdio.h>
#include<math.h>
main(){
	float n,quad, cubo, rquad, cquad;
	printf("Informe um numero: ");
	scanf("%f", &n);
	quad=pow(n, 2);
	cubo=pow(n, 3);
	rquad=sqrt(n);
	cquad=pow(n, 1/3);
	
	if(n>0){
		printf("quadrado: %f\n", quad);
		printf("cubo: %f\n", quad);
		printf("raiz quadrada: %f\n", quad);
		printf("raiz cubica: %f\n", quad);
	} else{
		printf("Digite um numero diferente de 0");
	}
	
		
	
}

