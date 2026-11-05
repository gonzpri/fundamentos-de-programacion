#include <stdio.h>

#define max 25

int main () {
    int i = 0;
    int mayusculas = 0, minusculas = 0, digitos = 0, guiones = 0;
    char c;

    printf("Introduce el codigo de seguimiento: \n");

    c = getchar();
    while (c != '\n') {
        i++;

        if (i <= max) {   // solo se procesan los 25 primeros caracteres
            if (c >= 'A' && c <= 'Z') {
                mayusculas++;
            } else if (c >= 'a' && c <= 'z') {
                minusculas++;
            } else if (c >= '0' && c <= '9') {
                digitos++;
            } else if (c == '-') {
                guiones++;
            }
            // cualquier otro caracter (espacios, etc.) no se cuenta
        }

        c = getchar();
    }

    printf("Letras mayusculas: %d\n", mayusculas);
    printf("Letras minusculas: %d\n", minusculas);
    printf("Digitos: %d\n", digitos);
    printf("Guiones: %d\n", guiones);

    return 0;
}
