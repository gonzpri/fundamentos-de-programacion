#include <stdio.h>
#include <ctype.h>
#define max 25

char codigo[max + 1];   // 25 caracteres + valor nulo

int main () {
    int i = 0;
    int mayusculas = 0, minusculas = 0, digitos = 0, guiones = 0;

    printf("Introduce el codigo de seguimiento (maximo %d caracteres): \n", max);
    scanf("%25[^\n]", codigo);      //Recoge 25 caracteres y los guarda en "codigo"

    // Recorrer array
    for (i = 0; codigo[i] != '\0'; i++) {
        if (isupper(codigo[i])) {           //Revisa mayusculas
            mayusculas++;
        } else if (islower(codigo[i])) {    //Revisa minusculas
            minusculas++;
        } else if (isdigit(codigo[i])) {    //Revisa digitos
            digitos++;
        } else if (codigo[i] == '-') {      //Revisa guiones
            guiones++;
        } else if (isspace(codigo[i])){     //Revisa espacios y saltos de linea
        }
    }

    printf("Letras mayusculas: %d\n", mayusculas); //Contador mayusculas
    printf("Letras minusculas: %d\n", minusculas); //Contador minusculas
    printf("Digitos: %d\n", digitos);              //Contador digitos
    printf("Guiones: %d\n", guiones);              //Contador guiones

    return 0;
}
