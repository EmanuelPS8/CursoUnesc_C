#include<stdio.h>
main(){
    float valor;
    char nome;
    printf("Nome do produto: ");
    scanf("%s", &nome);
    printf("Valor do produto: ");
    scanf("%f", &valor);

    if (valor<10)
    {
        valor=valor*1.7;
        printf("valor: %.2f", valor);
        printf("Nome do produto: %s", nome);
    } else if (valor<=10 && valor<30)
    {
        valor=valor*1.5;
        printf("valor: %.2f", valor);
        printf("Nome do produto: %s", nome);
    } else if (valor<=30 && valor<50)
    {
        valor=valor*1.4;
        printf("valor: %.2f", valor);
        printf("Nome do produto: %s", nome);
    }else
    {
        valor=valor*1.3;
        printf("valor: %.2f", valor);
        printf("Nome do produto: %s", nome);
    }
    
    
    
    
}