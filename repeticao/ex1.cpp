#include<stdio.h>
#include<math.h>
main()
{
    int num, i;
    float raiz;
    for ( i = 0; i <= 4; i++)
    {
        printf("Digite um num: ");
        scanf("%d", &num);
        raiz= sqrt(num);
        printf("%f", raiz);
    }
    
}
