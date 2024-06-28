#include<stdio.h>
main(){
    int i, a[5],b[5],c[10];

    for ( i = 0; i < 5; i++)
    {
        printf("digite um num A: ");
        scanf("%d", &a[i]);
        c[i]=a[i];
        
    }
    for ( i = 5; i < 10; i++)
    {
        printf("digite um num b: ");
        scanf("%d", &b[i]);
        c[i]=b[i];
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d\t",c[i]);
    }
     
    
    
    
    
}