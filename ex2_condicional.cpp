#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite um numero: ");
    scanf("%d", &num2);
    if ((num1+num2)>10){
        printf("numero: %d", num1+num2);

    } else{
        printf("menor que 10");
        
    }
    
    
}
