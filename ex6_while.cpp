#include<stdio.h>
main(){
    int idade=0, f=0, m=0,totali=0;
    float media;
    char sexo;

    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    while (idade!=0)
    {
    printf("Digite sua idade: ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("Digite seu sexo: ");
    fflush(stdin);
    scanf("%c", &sexo);
    if (sexo=='f')
    {
        f++;
    } if (sexo=='m') {
        m++;
    }
    totali = idade + totali;

    
    }
    media=totali/(f+m);
    printf("Mulheres: %d\n", f);
    printf("total: %d\n", totali);
    printf("Homens: %d\n", m);
    printf("Media: %f", media);

    

}