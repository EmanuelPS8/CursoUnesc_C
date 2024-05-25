#include<stdio.h>
main(){
    int idade, f, m,totali;
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
    } else {
        m++;
    }
    totali = idade + totali;

    
    }
    media=totali/f+m;
    printf("Mulheres: %d", f);
    printf("Homens: %d", m);
    printf("Media: %f", media);

    

}