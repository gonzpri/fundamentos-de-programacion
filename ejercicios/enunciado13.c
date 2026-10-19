#include <stdio.h>
#define N 10

int v[N];
int b[N];
int m[1][N];


int main() {
    
    int i,j;
    int tmp;
//Recoger array 1
    printf("Escribe 10 numeros: ");
    for (i = 0;i < N ;i++){
      scanf("%d", &v[i]);
    }
//Recoger array 2
    printf("Escribe 10 numeros: ");
    for (i = 0;i < N ;i++){
      scanf("%d", &b[i]);
    }
// Intertir numeros del array 2.
    for (i = 0; i < N/2; i++){
        tmp = b[i];
        b[i] = b[N-1-i];
        b[N-1-i] = tmp;      
    }
//Intercalar arrays en m
    for (i = 0;i < N ;i++){
        for (j = 0;j < 2; j++){
            if (j == 0){
                m[i][j] = v[i];

            } else if (j == 1){
                m[i][j] = b[i];

            }
        }    
    }
//Imprime el resultado
    for (i = 0;i < N ;i++){
        for (j = 0;j < 2; j++){
            printf("%d ",m[i][j] );
        }    
    printf("\n");
    }

    return 0;
}