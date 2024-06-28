#include<stdio.h>
main(){
    int i;
    float sal[5], novosal[5];
    char nome[4][30];

    for ( i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fflush(stdin);
        scanf("%c", &nome[i]);
        printf("Salario: ");
        fflush(stdin);
        scanf("%f", &sal[i]);

        novosal[i] = 0.08*sal[i];
    }
    for ( i = 0; i < 5; i++)
    {
        /* code */
        printf("%c tem um sal de %f", nome[i], novosal[i]);
    }
    
    

}