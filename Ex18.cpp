#include<stdio.h>

int main(){
    int codigo,qtd,preco;
    int precot;
    printf("Digito do codigo do produto(de 1-40): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade do produtos: ");
    scanf("%d", &qtd);

    if (codigo>=1 && codigo<=10)
    {
        preco=10;
        precot=preco*qtd;
        if (precot<=250)
        {
            precot=precot*0.95;
        } else if (precot<250 && precot<=500)
        {
            precot=precot*0.90;
        } else if (precot>500)
        {
            precot=precot*0.85;
        }
        
              
    } else if (codigo>=11 && codigo<=20)
    {
        preco=15;
        precot=preco*qtd;
        if (precot<=250)
        {
            precot=precot*0.95;
        } else if (precot<250 && precot<=500)
        {
            precot=precot*0.90;
        } else if (precot>500)
        {
            precot=precot*0.85;
        }
     
    } else if (codigo>=21 && codigo<=30)
    {
        preco=20;
        precot=preco*qtd;
        if (precot<=250)
        {
            precot=precot*0.95;
        } else if (precot<250 && precot<=500)
        {
            precot=precot*0.90;
        } else if (precot>500)
        {
            precot=precot*0.85;
        }
    } else if (codigo>=31 && codigo<=40)
    {
        preco=30;
        precot=preco*qtd;
        if (precot<=250)
        {
            precot=precot*0.95;
        } else if (precot<250 && precot<=500)
        {
            precot=precot*0.90;
        } else if (precot>500)
        {
            precot=precot*0.85;
        }
    }
    printf("preco: %d", preco);
    printf("preco total: %d", precot);
}