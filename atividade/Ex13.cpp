#include<stdio.h>
main(){
	int n, i;
	printf("Digite um numero para mostrar sua tabuada: ");
	scanf("%d", &n );

	for ( i=1; i<11; i++ ) {
   	printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}
