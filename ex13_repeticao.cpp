#include<stdio.h>
int main()
{
    int i,soma,somai,par=0,impar=0;
    float percentp,percenti;
    for ( i = 85; i <= 906; i++)
    {
        printf("%d\n", i++);
        if(i%2==0){
            soma=soma+i;
            par++;
        }else{
            somai=somai+i;
            impar++;
        }
    }
    printf("soma dos pares: %d", soma);
    printf("soma dos impares: %d", somai);
    printf("soma dos : %d", par);
    percenti = 821/impar*100;
    printf("porcentagem dos impares: %f", percenti);
    percentp = 821/par*100;
    printf("porcentagem dos pares: %f", percentp);
    printf("porcentagem dos : %d", impar);

    
}
