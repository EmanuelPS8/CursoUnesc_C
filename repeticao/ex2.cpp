#include<stdio.h>
int main()
{
    int i;
    float nota,media;
    for (i = 1; i <= 4; i++)
    {
        printf("Digite sua nota: ");
        scanf("%f", &nota);
        media=media+nota;
    }
    printf("Sua media e: ", media);
    
}
