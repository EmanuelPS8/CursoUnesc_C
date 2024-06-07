#include<stdio.h>
main(){
    int p=0,n=0,conta,clientes=0;
    float saldo, agencia, percentual;
    char nome[30];

    printf("Numero da conta: ");
    scanf("%d", &conta);
    printf("Nome da conta: ");
    gets(nome);
    printf("Saldo da conta: ");
    scanf("%f", &saldo);
    while (conta != -999 || clientes == 5 )
    {
        clientes++;
        printf("Numero da conta: ");
        scanf("%d", &conta);
        fflush(stdin);
        printf("Nome da conta: ");
        gets(nome);
        fflush(stdin);
        printf("Saldo da conta: ");
        scanf("%f", &saldo);
        fflush(stdin);

        printf("Conta: %d\n", conta);
        printf("Nome: %s\n", nome);
        printf("Saldo: %.2f\n", saldo);
        agencia = saldo + agencia;
        if (saldo >= 0)
        {
            printf("Seu saldo está positivo\n");   
            p++;         
        } else if (saldo < 0)
        {
            printf("Seu saldo está negativo\n");            
            n++;
        }
        
    }
    percentual = p/clientes;
    printf("Saldo negativo: %d\n", n);
    printf("Porcentagem de saldo positivo: %.0f\n", percentual);
    printf("Total de clientes: %d\n", clientes); 
    printf("Saldo da agencia: %.2f\n", agencia);
    
}