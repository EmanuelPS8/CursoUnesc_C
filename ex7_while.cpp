#include<stdio.h>
main(){
    int idade,c=0,s=0,v=0,d=0,totali=0,p=0;
    char ec;
    float mediav,percent;

    printf("Sua idade: ");
    scanf("%d", &idade);

    while (idade!=0)
    {
        printf("Sua idade: ");
        scanf("%d", &idade);
        fflush(stdin);
        printf("Seu estado civil (C - casado\nS - solteiro\nV - viuvo\nD - desquitado ou separado): ");
        scanf("%c", &ec);
        p++;
        if (ec='C')
        {
            c++;
        } else if (ec='c')
        {
            c++;
        } else if (ec='S')
        {
            s++;
        }else if (ec='s')
        {
            s++;
        }else if (ec='V')
        {
            v++;
            totali = idade + totali;
        }else if (ec='v')
        {
            v++;
            totali = idade + totali;
        }else if (ec='D')
        {
            d++;
        }else if (ec='d')
        {
            d++;
        }
    }
    mediav=totali/v;
    percent=p/d*100;
    fflush(stdin);
    printf("Casadas: %d", c);
    printf("Solteiras: %d", s);
    printf("Media idade viuvas: %.0f", mediav);
    printf("A porcentagem de pessoas desquitadas ou separadas: %.1f", percent);
}   