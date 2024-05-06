#include<stdio.h>
#include<math.h>
main()
{
    int num, i;
    float raiz=0;
    for ( i = 1; i <= 4; i++)
    {
        printf("\nDigite um num: ");
        fflush(stdin);
        scanf("%d", &num);
        raiz= sqrt(num);
        printf("Raiz de %d e: %.1f",num, raiz);
    }

}