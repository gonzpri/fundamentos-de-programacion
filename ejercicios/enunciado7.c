#include <stdio.h>

#define N 300

int main(){
    int i;
    /*Bucle creciente*/
    for (i=0;i<=N;i++){
        if (i % 5 == 0){
        printf("%d ",i);

        }
    }
    printf("\n\n");
}