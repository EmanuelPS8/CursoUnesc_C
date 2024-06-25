#include<stdio.h>
main(){
    int i, num[5],maior=-9999,menor=9999,soma=0;
    for (i = 0; i < 5; i++)
    {
        printf("digite um num: ");
        scanf("%d", &num[i]);
        if (num[i]>maior)
        {
            maior=num[i];
        }
        if (num[i]<menor)
        {
            menor=num[i];
        }
        soma=soma+num[i];
        
    }
    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);
    printf("media: %d\n", soma/5);
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", num[i]);
    }
    
    
    
}