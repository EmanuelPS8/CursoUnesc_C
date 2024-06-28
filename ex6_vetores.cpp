#include<stdio.h>
main(){
    int i, menor=99999, maior=-99999, num[5], posma,posme;

    for (i = 0; i < 5; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &num[i]);
        if (num[i]>maior)
        {
            maior=num[i];
            posma=i;
        }
        if (num[i]<menor)
        {
            menor=num[i];
            posme=i;
        }      
    }
    printf("diferença maior e menor: %d\n", maior-menor);
    printf("Posicao do maior: %d\nPosicao menor:%d\n", posma,posme);
    
}