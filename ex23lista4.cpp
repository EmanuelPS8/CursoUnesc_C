#include<stdio.h>

int main(){
    int num;
    printf("digite um numero: ");
    scanf("%d", &num);
    
    if (num%2==0)
    {
        printf("%d e par", num);
    } else {
        printf("%d e impar", num);

    }
    

}