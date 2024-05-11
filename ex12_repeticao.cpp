#include<stdio.h>
int main()
{
    int i, par=0, num,percent;
    for ( i = 1; i <= 5; i++)
    {
        printf("digite um num: ");
        scanf("%d", &num);
        if (num%2==0)
        {
            par++;
        }else{
            printf("numero nao par\n");
        }
        
    }

    percent = par*20;
    printf("porcentagem: %d", percent);
    
    

}
