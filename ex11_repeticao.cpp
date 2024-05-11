#include<stdio.h>
int main()
{
    int i,neg=0,pos=0, num=0;
    int div=0;
    for ( i = 1; i <= 5; i++)
    {
        printf("Digite um num: ");
        scanf("%d", &num);
        div=num%2;
        if(div==0){
            pos++;
        } else{
            neg++;
        }

    }
    printf("Positivos: %d\nNegativos: %d", pos, neg);
    
}
