    /*Implementar en C el siguiente procedimiento 
    void numeros(int a, int b, int resultado[]);
    que almacena en el array resultado los múltiplos de 11 entre a y b en orden inverso
    Ejemplo de llamada: numeros(1,60,numeros)
    dejaría números con los siguientes valores: [ 55, 44, 33, 22, 11, 1 ]
    Nota: si el array no se construye dinámicamente y tiene una dimensión mayor que el número de
    múltiplos que hay entre a y b, puede rellenarse el resto de los valores con un valor de referencia
    (por ejemplo, -1 o 0)
    */

#include <stdio.h>
#include <stdlib.h>

#define N 20

void numeros(int a, int b, int resultado[]);

int main() {

    int resultado [N];
    int a,b,i;

    printf("Introduce a y b: ");
    scanf("%d %d", &a, &b);

    numeros(a,b,resultado);

    i = 0;
    while (resultado[i] > 0){
        printf("%d ", resultado[i]);
        i++;
    }
}

void numeros(int a, int b, int resultado[]) {
    int i, k;

    for(i=0;i<N; i++){
        resultado[i] = 0;
    }
k=0;
    for(i=b; i>=a; i--){
        if(i % 11 == 0){
            resultado[k++] = i;
        }
    }
}