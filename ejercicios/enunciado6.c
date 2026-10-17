#include <stdio.h>

#define N 100

int main(){
    int i;
    /*Bucle creciente*/
    for (i=0;i<=N;i++){
        printf("%d ",i);
        }
    printf("\n\n");

    /*Bucle while decreciente*/
    while(i>=1){
        printf("%d ",i);
        i--;
    }
    printf("\n\n");
}