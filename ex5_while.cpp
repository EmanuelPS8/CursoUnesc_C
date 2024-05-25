#include<stdio.h>
main(){
    int num, maior=-99999, menor=99999,i=0;
    float media=0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    while (num!=0)
    {
        if (num>maior)
        {
            maior=num;
        }
        if (num<menor)
        {
           menor=num;
        }
        i++;
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("i=%d\n",i);
        printf("menor: %d\n", menor);
        printf("maior: %d\n", maior);
        media=maior+menor/i;
        printf("media: %f", media);
    }

}