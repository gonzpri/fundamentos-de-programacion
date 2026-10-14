#include <stdio.h>

int main() {

        float a, b, c, d, e;

    //1- Recoge 5 números dados por el usuario
    printf("Introduzca 5 numeros enteros\n");

    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    printf("d: ");
    scanf("%f", &d);
    printf("e: ");
    scanf("%f", &e);

    //2- Calcula el promedio
    float  promedio = (a + b + c + d + e)/5;

    //3- Lo imprime
    printf("La suma de los numeros es: %f\n", promedio);
    return 0;    
}