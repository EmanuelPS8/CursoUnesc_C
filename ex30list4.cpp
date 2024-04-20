#include<stdio.h>
main(){
    float sal, desconto;
    printf("Qual seu salario: ");
    scanf("%f", &sal);
    if (sal<=600)
    {
        printf("Isento");
    }else if (sal>600 && sal<=1200)
    {
        desconto=sal*0.2;
        printf("Seu desconto e de: %.2f", desconto);
    } else if (sal>1200 && sal<=2000)
    {
        desconto=sal*0.25;
        printf("Seu desconto e de: %.2f", desconto);
    }else if (sal>2000)
    {
        desconto=sal*0.3;
        printf("Seu desconto e de: %.2f", desconto);
    }
    
    
    
    
}