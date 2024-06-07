#include<stdio.h>
main(){
    float sal, ht, he;
    int dep;

    printf("Seu salario minimo: ");
    scanf("%f", &sal);

    while (ht>=0)
    {
        printf("Seu salario minimo: ");
        scanf("%f", &sal);
        printf("Numero de horas trabalhadas: ");
        scanf("%f", &ht);
        printf("Numero de dep: ");
        scanf("%d", &dep);
        printf("Quantidade de horas extras ");
        scanf("%f", &he); 

        
        sal=ht*(sal*0.1);
        sal=sal+(dep*32);
        sal=sal+((ht*(sal*0.1))/2);
        if (sal >= 900)
        {
            sal=sal;
            sal = sal + 100;
        } else if (sal>900 && sal<=1500)
        {
            sal = sal - (sal*0.1);
            sal = sal + 50;
        } else if (sal>1500)
        {
            sal = sal - (sal*0.2);
            sal = sal + 50;
        }
        printf("Salario: %f", sal);
        

    }  
}