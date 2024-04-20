#include<stdio.h>
main(){
    int op;
   
    printf("Escolha uma opcao: 1-Alimento não perecível\n2,3,4-Alimento perecível\n5,6-Vestuario\n7- Higiene Pessoal\n8 a 15- Limpeza e utensilios");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Alimento nao perecivel");
        break;
    case 2 ... 4:
        printf("Alimento perecivel");
        break;
    case 5 ... 6:
        printf("Vestuario");
        break;
    case 7:
        printf("Higiene pessoal");
        break;
    case 8 ... 15:
        printf("Limpeza e uensilio domesticos");
        break;
    
    default: printf("Incorreto");
        break;
    }
}