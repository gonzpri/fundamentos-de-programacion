#include <stdio.h>
#include <stdlib.h>

#define N 12

void imprimir(const char *titulo, int vec[], int n){
    printf("%s", titulo);
    for (int k = 0; k < n; k++){
        printf("%d ", vec[k]);
    }
    printf("\n");
}

int main(){
    int v[N] = {10, 6, 15, 7, 21, 4, 9, 35, 14, 5, 3, 11};
    int n2 = 0, n3 = 0, n5 = 0, n7 = 0;

    /* Pasada 1: contar cuántos elementos va a tener cada array */
    for (int i = 0; i < N; i++){
        if (v[i] % 2 == 0)      n2++;
        else if (v[i] % 3 == 0) n3++;
        else if (v[i] % 5 == 0) n5++;
        else if (v[i] % 7 == 0) n7++;
    }

    /* Reserva con el tamaño exacto */
    int *v2 = malloc(n2 * sizeof(int));
    int *v3 = malloc(n3 * sizeof(int));
    int *v5 = malloc(n5 * sizeof(int));
    int *v7 = malloc(n7 * sizeof(int));
    if ((n2 && !v2) || (n3 && !v3) || (n5 && !v5) || (n7 && !v7)){
        printf("Error: no hay memoria suficiente\n");
        free(v2); free(v3); free(v5); free(v7);
        return 1;
    }

    /* Pasada 2: rellenar, con un contador propio por array */
    int j2 = 0, j3 = 0, j5 = 0, j7 = 0;
    for (int i = 0; i < N; i++){
        if (v[i] % 2 == 0)      v2[j2++] = v[i];
        else if (v[i] % 3 == 0) v3[j3++] = v[i];
        else if (v[i] % 5 == 0) v5[j5++] = v[i];
        else if (v[i] % 7 == 0) v7[j7++] = v[i];
    }

    imprimir("Multiplos de 2: ", v2, n2);
    imprimir("Multiplos de 3: ", v3, n3);
    imprimir("Multiplos de 5: ", v5, n5);
    imprimir("Multiplos de 7: ", v7, n7);

    free(v2); free(v3); free(v5); free(v7);
    return 0;
}
