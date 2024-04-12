#include<stdio.h>

int main(){
    float preco, precofinal;
    printf("Seu saldo medio: ");
    scanf("%f", &preco);
    if (preco<=15000){
        precofinal=preco*1.05;
    } else if (preco<=25000)
    {
        precofinal=preco*1.25; 
    } else if (preco>25000)
    {
        precofinal=preco*1.35; 
       
    }
    
    
}