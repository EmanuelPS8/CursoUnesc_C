#include<stdio.h>
int main(){
    int num, i, produto=1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        produto = produto * i;
    }
    printf("Produto: %d", produto);
    
}