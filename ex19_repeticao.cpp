#include<stdio.h>
main(){
    int ant=0, atual=1, prox=0;
    printf("Digite um num: ");
    scanf("%d", &ant);
    printf("Digite um num: ");
    scanf("%d", &prox);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", atual);
        prox = ant+atual;
        ant=atual;
        atual=prox;
    }
}