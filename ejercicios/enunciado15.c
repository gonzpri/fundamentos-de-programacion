#include <stdio.h>
#include <stdlib.h>   // necesario para malloc

#define N 8           // tamaño fijo del array original

int main(int argc, char **argv)
{
    int v[N];                      // array original (estático)
    int *v1 = NULL, *v2 = NULL;    // punteros para los arrays dinámicos (aún sin memoria)
    int i, i1, i2, n1, n2;         // i recorre v; i1/i2 = siguiente hueco libre; n1/n2 = tamaños

    printf("Introduce los números del array: ");
    for(i=0; i<N; i++) {
        scanf("%d", &v[i]);        // leemos los N números
    }

    // --- 1ª PASADA: contar ---
    n1 = 0;
    n2 = 0;
    for(i=0; i<N; i++) {
        if(v[i]%5 == 0) {          // resto 0 al dividir entre 5 => múltiplo de 5
            n1++;
        }
        if(v[i]%7 == 0) {          // múltiplo de 7 (es un if aparte: un número puede serlo de ambos, p.ej. 35)
            n2++;
        }
    }

    // --- Reservar memoria justa ---
    v1 = (int*)malloc(n1*sizeof(int));   // n1 enteros
    v2 = (int*)malloc(n2*sizeof(int));   // n2 enteros
    if(v1==NULL || v2==NULL) {           // si malloc falla devuelve NULL
        printf("Error\n");
        return 1;
    }

    // --- 2ª PASADA: rellenar ---
    i1 = 0;                        // posición donde escribir en v1
    i2 = 0;                        // posición donde escribir en v2
    for(i=0; i<N; i++) {
        if(v[i]%5 == 0) {          // v recorrido hacia delante
            v1[i1] = v[i];
            i1++;
        }
        if(v[N-1-i]%7 == 0) {      // v recorrido hacia atrás
            v2[i2] = v[N-1-i];
            i2++;
        }
    }

    // --- Imprimir ---
    for(i=0; i<n1; i++) printf("%d ", v1[i]);
    printf("\n");
    for(i=0; i<n2; i++) printf("%d ", v2[i]);
    printf("\n");
    return 0;
}