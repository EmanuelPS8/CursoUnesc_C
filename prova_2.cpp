#include<stdio.h>
main(){
    char sexo, olhos, cabelo;
    int idade, maior= -99999, f=0, vl=0;

    printf("Informe sua idade: ");
    scanf("%d",&idade);
    fflush(stdin);

    while (idade != -1)
    {
        printf("Informe sua idade: ");
        scanf("%d",&idade);
        fflush(stdin);
        printf("Informe sua cor de cabelo\nL - loiro / C - castanho / P - preto: ");
        scanf("%c",&cabelo);
        fflush(stdin);
        printf("Informe sua cor de olhos\nA - azul / C - castanho / V - verde: ");
        scanf("%c",&olhos);
        fflush(stdin);
        printf("Informe seu sexo (F/M): ");
        scanf("%c",&sexo);
        fflush(stdin);
        if(idade>maior) {
            maior = idade;
        }
        if (sexo == 'F' && idade>=18 && idade<=35)
        {
            f++;
        }
        if (olhos=='V' && cabelo=='L')
        {
            vl++;
        }
    }
    printf("Maior idade: %d\n", maior);
    printf("Feminino entre 18 e 35: %d\n", f);
    printf("Olhos verdes e cabelo loiro: %d\n", vl);
    

}