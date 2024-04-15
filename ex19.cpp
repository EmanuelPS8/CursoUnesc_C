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
    float preco, npreco, impostos, aumento;
    printf("Informe e preco: ");
    scanf("%f", &preco);
    printf("Informe a categoria (1-limpeza;\n2-alimentacao;\n3-vestuario)");
    scanf("%d", &cat);
    fflush(stdin);
    printf("Informe a categoria (R-produtos que necessitam de refrigeracao;\nN-produtos que nao necessitam de refrigeracao): ");
    scanf("%c", &sit);

        /*Categoria 1
        fazer if{}elif{}elif{}elif{}elif
        */   
    if (preco<=25 && cat==1 && sit=='N'){
        npreco=preco*1.05;
        aumento=npreco-preco;
        impostos=(npreco*1.08)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Se ser sit R imposto 5%*/
        }else if (preco<=25 && cat==1 && sit=='R'){
        npreco=preco*1.05;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Categoria 2*/   
        }else if (preco<=25 && cat==2 || sit=='R'){
        npreco=preco*1.08;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Categoria 3*/   
        }else if (preco<=25 && cat==3 && sit=='N'){
        npreco=preco*1.10;
        aumento=npreco-preco;
        impostos=(npreco*1.10)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Se for sit R imposto 5%*/   
        }else if (preco<=25 && cat==3 && sit=='R'){
        npreco=preco*1.10;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Categoria 1.2*/
        }else if (preco>25 && cat==1 && sit=='N'){
        npreco=preco*1.12;
        aumento=npreco-preco;
        impostos=(npreco*1.08)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco); 
        /*Se for sit R imposto 5%*/  
        }else if (preco>25 && cat==1 && sit=='R'){
        npreco=preco*1.12;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);  
        /*Categoria 2.2*/ 
        }else if (preco>25 && cat==2 || sit=='R'){
        npreco=preco*1.15;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Categoria 1.2*/   
        } else if (preco>25 && cat==3 && sit=='N'){
        npreco=preco*1.18;
        aumento=npreco-preco;
        impostos=(npreco*1.08)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);
        /*Se for sit R imposto 5%*/   
        } else if (preco>25 && cat==3 && sit=='R'){
        npreco=preco*1.18;
        aumento=npreco-preco;
        impostos=(npreco*1.05)-npreco;
        printf("Aumento de R$%.2f\n", aumento);
        printf("Valor do imposto: R$%.2f\n", impostos);
        npreco=npreco-impostos;
        printf("Novo preco: R$%.2F\n", npreco);   
        }

    if (npreco<=50) {
        printf("Classificacao: Barato");
    } else if (npreco>50 && npreco<120) {
        printf("Classificacao: Normal");
    } else {
        printf("Classificacao: Caro");
    }
    
      
}