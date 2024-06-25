#include<stdio.h>
main(){
    int i, numa[5], numb[5], soma[5];

    for (i = 0; i < 5; i++)
    {
        printf("digite numa: ");
        scanf("%d", &numa[i]);   
    }
    for (i = 0; i < 5; i++)
    {
        printf("digite numb: ");
        scanf("%d", &numb[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        soma[i]=numa[i]+numb[i];
        printf("%d\t", soma[i]);
    }
    
    
}