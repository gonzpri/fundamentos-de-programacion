/*Implementar el siguiente procedimiento 
    void matriz_potencias(int n, int pot[N][M]);
que dado un número n, guarda en la matriz pot, las cinco primeras potencias 
de los números de 1 a n*/

#include <stdio.h>
#include <stdlib.h>
#define M 5
#define N 20

void matriz_potencias(int n, int pot[N][M]);

int main(int argc, char **argv) {
    int n, pot[N][M];
    int i,j;

 

    printf("Introduce un numero: ");
    scanf("%d", &n);

    matriz_potencias(n, pot);

        /*Leemos la matriz*/
    for(i=0; i<N; i++) {
        if( pot[i][0]==0 ) break;
        for (j=0; j<M; j++){
            printf("%d ", pot[i][j]);
        }
    printf("\n");
    }

}

void matriz_potencias(int n, int pot[N][M]){
    int i,j;
    int producto;

    for (i=1;i<=N;i++){
        producto = 1.0;
        for (j=1;j<=M;j++){
            producto = producto * i;
            if(i <= n) {
                pot[i-1][j-1] = producto;
            } else {
                pot[i-1][j-1] = 0;
            }
        }
    }
}