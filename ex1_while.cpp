#include<stdio.h>
main(){
    char letra;

    while (letra!='f')
    {
        printf("Digite uma letra: ");
        fflush(stdin);
        scanf("%c", &letra);
    }
    
    printf("digitou F");
}
