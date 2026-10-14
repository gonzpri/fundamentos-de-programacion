#include <stdio.h>

int main(){
    char color = 'V';

    //switch acepta int y char
    switch (color) {
        case 'V':
            printf("Exito");
            break;
        case 'A':
            printf("Advertencia");
            break;
        default:
            printf("Error");
            break;
    }

    return 0;
}