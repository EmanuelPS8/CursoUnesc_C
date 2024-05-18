#include<stdio.h>
main(){
    int num,maior=-99999, menor=99999;
    float soma=0;
    for (int i = 1; i <= 5; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num);
        soma +=num;
        if (num>maior)
        {
            num=maior;
        }
        if (num<menor)
        {
           num=menor;
        }
        
        
    }    
    printf("media = %.1f\n", soma/5);
    printf("menor = %d\n", menor);
    printf("maior = %d", maior);
   
}