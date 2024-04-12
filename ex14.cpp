#include<stdio.h>

int main(){
    float salario;
    printf("Seu saldo medio: ");
    scanf("%f", &salario);
    if (salario<3000){
        salario=salario*1.15;
    } else if (salario<=6000){
        salario=salario*1.1;
    } else if (salario<=9000)
    {
        salario=salario*1.05;
    }else if (salario>9000)
    {
        salario=salario;
    }
    printf("salario: %.2f", salario);
}