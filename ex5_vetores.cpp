#include<stdio.h>
main(){
    int i, num[5], t[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d\t\n", num[i]);
    }
    for (i = 0; i < 5; i++)
    {
        t[i]=num[i]*3;
        printf("%d\t", t[i]);
    }
    
}