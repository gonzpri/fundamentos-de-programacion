#include <stdio.h>
#include <string.h>

char frase[100];
int i;

int main(){
    printf("Introduce una frase\n");
    fgets(frase, 100, stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            printf("\n");
        } else {
            printf("%c", frase[i]);
        }
    }

    return 0;
}