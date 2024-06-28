#include<stdio.h>
main(){
    int i, num, neg=0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num<0){
            neg=i;
        }
        
    }
    if (neg>=0)
    {
        printf("não tem num negativo");
    }
    
    printf("Num negativo esta na posição: %d", neg);

    
}