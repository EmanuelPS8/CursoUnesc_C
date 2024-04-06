#include<stdio.h>
int main()
{
    float n1,n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);    
    printf("Digite um numero: ");
    scanf("%f", &n2);

    if (n1>n2)
    {
    printf("menor: %.2f\nmaior: %.2f", n2, n1);
  
    } else {
            printf("menor: %.2f\nmaior: %.2f", n1, n2);

    }
    
}
