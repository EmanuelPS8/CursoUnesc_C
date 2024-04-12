#include<stdio.h>

int main()
{
    float saldo, credito;
    printf("Seu saldo medio: ");
    scanf("%f", &saldo);
    if (saldo<=2000){
        credito=saldo*0.1;
    } else if (saldo<=3000){
        credito=saldo*0.2;
    } else if (saldo<=4000)
    {
        credito=saldo*0.25;
    }else if (saldo>4000)
    {
        credito=saldo*0.3;
    }
    printf("Saldo: %.2f\nCredito: %.2f", saldo, credito); 
}
