#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Digite n1: ");
    scanf("%f", &n1);
    printf("Digite n2: ");
    scanf("%f", &n2);

    if (((n1+n2)/2) <= 3)
    {
        printf("Reprovado");

    } else if (((n1+n2)/2) > 3 && ((n1+n2)/2) < 7)
    {
        printf("Exame");
       
    } else {
        printf("Aprovado");

    }
    
}

