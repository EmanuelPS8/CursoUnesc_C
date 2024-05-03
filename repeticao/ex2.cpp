#include<stdio.h>
main()
{
    int i;
    float nota,media;
    for (i = 1; i<=4; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &nota);
        media=media+nota;
    }
    printf("Sua media e: %.2f", media);
}
