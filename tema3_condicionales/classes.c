#include <stdio.h>

typedef struct Lenguaje {
    char* nombre;
    int año;
} Lenguaje;

void descripcion(Lenguaje lenguaje) {
    printf("%s fue creado en %d\n", lenguaje.nombre, lenguaje.año);
}

int main() {
    Lenguaje html;
    html.nombre = "HTML";
    html.año = 1993;
    Lenguaje css;
    css.nombre = "CSS";
    css.año = 1996;
    descripcion(html); // 'HTML fue creado en 1993'
    descripcion(css);   // 'CSS fue creado en 1996

    return 0;
}