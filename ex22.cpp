#include<stdio.h>

int main(){
    float peso1, peso2;
    char nome1[30], nome2[30];
    printf("Seu nome1: ");
    gets(nome1);
    printf("Seu nome1: ");
    gets(nome2);
    printf("Seu peso1: ");
    scanf("%f", &peso1);
    printf("Seu peso2: ");
    scanf("%f", &peso2);

    if (peso1>peso2)
    {
        printf("%s e a pessoa mais pesada", nome1);
    } else{
        printf("%s e a pessoa mais pesada", nome2);

    }
    


}