#include<stdio.h>
int main(){
    int ant=0, atual=1, prox=0;
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", atual);
        prox = ant+atual;
        ant=atual;
        atual=prox;
    }
    
}