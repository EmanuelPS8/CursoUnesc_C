#include<stdio.h>
int main(){
    int num,num2,soma=0,maior,menor,imp=0,i,par=0;
    float media,percent;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for ( i = 1; i <= num; i++)
    {
        printf("Informe um numero: ");
        scanf("%d", &num2);
        soma=soma+num2;
        if(num2%2!=0){
            imp++;
        }else{
            par++;
        }
    }
    media=soma/num;
    printf("Media: %.1f\n", media);
    printf("Soma: %d\n", soma);
    printf("Qtd: %d\n", num);
    percent=imp/num*100;
    printf("Percent de impar: %f\n", percent);
    printf("impar: %d", imp);


}