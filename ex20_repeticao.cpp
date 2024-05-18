#include<stdio.h>
main(){
    char nome[30];
    float sal;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite seu nome: ");
        scanf("%s", &nome);
        
        printf("Digite seu salario: ");
        scanf("%f", &sal);
        if (sal < 990)
        {
            printf("Isento!");
        } else if (990 <= sal < 2500)
        {
            sal = sal *0.1;
            printf("10 do salario bruto %f ", sal);
        } else if (sal >= 2500)
        {
            sal = sal *0.15;
            printf("15 do salario bruto %f ", sal);
        }
        
        
        
    }
    
}