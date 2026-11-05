#include <stdio.h>
#include <string.h>

#define max 25

char codigo[max];

int main () {
    int i;

    printf("Introduce el codigo de seguimiento: \n");
    scanf("%24s",codigo);

    printf("%s",codigo);

    return 0;
}