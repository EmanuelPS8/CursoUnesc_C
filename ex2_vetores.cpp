#include<stdio.h>
main(){
    int num[5], i, novonum[5];
    for (i = 0; i < 5; i++)
    {
        printf("digite um num: ");
        scanf("%d", &num[i]);
        novonum[i] = num[i];
    }
    printf("Os valores informados em ordem inversa sao:");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", num[i]);
    }
    printf("Os valores informados em ordem inversa sao:");
    for (i = 5; i >= 0; i--)
    {
        printf("%d\t", novonum[i]);
    }
}