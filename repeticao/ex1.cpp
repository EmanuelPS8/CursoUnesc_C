#include<stdio.h>
#include<math.h>
main()
{
    int num, i;
    float raiz=0;
    for ( i = 1; i <= 4; i++)
    {
        printf("Digite um num: ");
        scanf("%d", &num);
        raiz= sqrt(num);
        printf("%f", raiz);
    }

}
