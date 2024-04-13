#include<stdio.h>
/*
pedir preco, categoria e situacao
calcular e mostrar o valor de aumento e imposto
preco final, menos impostos
classificacao usando a tabela

*/
int main(){

    int  cat;
    char sit;
    float preco, npreco;
    printf("Informe e preco: ");
    scanf("%f", &preco);
    printf("Informe a categoria (1-limpeza;\n2-alimentacao;\n3-vestuario)");
    scanf("%d", &cat);
    printf("Informe a categoria (R-produtos que necessitam de refrigeracao;\nN-produtos que nao necessitam de refrigeracao): ");
    scanf("%c", &sit);

    if (preco<=25 && cat==1)
    {
        npreco=preco*1.05;
    } else if (preco<=25 && cat==2)
    {
        npreco=preco*1.08;
        /*dar uma olhada nisso*/
        if (cat==2 || sit=='R')
        {
        npreco=preco*1.05;
        } else {
        npreco=preco*1.08;
        }
        
    }else if (preco<=25 && cat==3)
    {
        npreco=preco*1.10;
    }
    
    
}