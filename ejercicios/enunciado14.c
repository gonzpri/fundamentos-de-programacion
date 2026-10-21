#include <stdio.h>

#define N 6
#define M 3

int main() {
    int i, j;
    int v[N];
    int w[M];

    //Recoger array 1
        printf("Escribe el array v[N=%d]: ", N);
        for(i=0;i<N;i++){
            scanf("%d", &v[i]);
        }
    //Recoger array 2
        printf("Escribe el array v[M=%d]: ", M);
        for(i=0;i<M;i++){
            scanf("%d", &w[i]);
        }

    j=0;
    for (i=0;i<N;i++){
        if (j < M && v[i] == w[j]){
            j++;
        }
    }

    if (M==j){
        printf ("Resultado true");
    } else {
        printf ("Resultado false");
    }

   return 0;

}