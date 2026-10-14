/*Crea un programa en C que solicite al usuario ingresar dos matrices de 2x2 y
luego muestre el resultado de su multiplicación*/
#include <stdio.h>

#define N 2
#define M 2
#define R 2


int main() {

    int i, j, k;
    int m1[N][R];
    int m2[R][M];
    int solucion [N][M];

    /*Leer matrices */
    printf("Introduzca m1:\n");
    for (i=0; i<N; i++){
        for (j=0; j<R; j++){
                scanf("%d", &m1[i][j]);
        }
    }
    /*Introduzca la matriz 2*/
    printf("Introduzca m2:\n");
        for (i=0; i<R; i++){
            for (j=0; j<M; j++){
                    scanf("%d", &m2[i][j]);
            }
    }

    /*Realizar multiplicación*/
    for (i=0; i<N; i++){
        for (j=0; j<R; j++){
            solucion [N][M] = 0;
            for (k=0; k<R; k++){
                solucion [i][j] += m1[i][k]*m2[k][j]; 
            }
        }
    }

    /*Leemos la matriz*/
    for(i=0; i<N; i++) {
        for (j=0; j<M; j++){
            printf("%d ", solucion[i][j]);
            printf("\n");
        }
    }
}