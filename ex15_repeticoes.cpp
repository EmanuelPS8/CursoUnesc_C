#include<stdio.h>
int main(){
    int num, i, fatorial=1;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        printf("%d\n", i);
        fatorial = fatorial * i;
    }
    printf("%d!= %d",i-1, fatorial);
}