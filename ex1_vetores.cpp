#include<stdio.h>
main(){
    int num[7];
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        
    }
    for (i = 0; i < 7; i++)
    {       
        printf("%d\t", num[i]);  
    }
    
}