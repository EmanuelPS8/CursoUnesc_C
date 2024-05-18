#include<stdio.h>
int main(){
    int num,num2,soma=0,maior=-99999,menor=99999,i,par=0;
    float media,percent, imp=0;
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
    percent=imp/num*100.0;
    printf("Percent de impar: %.0f\n", percent);
    printf("impar: %f", imp);


}