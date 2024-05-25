#include<stdio.h>
main(){
    int num, triplo;
    printf("Digite um num: ");
    scanf("%d", &num);
    while (num!=-999)
    {
        triplo = num *3;
        printf("triplo %d", triplo);
        printf("Digite um num: ");
        scanf("%d", &num);
    }
    
}