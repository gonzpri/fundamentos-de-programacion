/*Escribir un programa que calcule las soluciones a una ecuación de segundo grado de la
forma: a·x2+b·x+c=0. Modificarlo después para contemplar los posibles casos de error por datos
incorrectos.*/

#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, d, x1, x2;

    /*Introducimos los coeficientes a, b y c*/
    printf("Introduzca los coeficientes de la ecuación a·x**2+b·x+c=0,\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    d = sqrt (b*b-4*a*c);
    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("Las soluciones de la ecaucion son: \n\tx1 = %f\n\tx2 = %f\n", x1, x2);
}

