#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void leerCadena(char* cadena);
void invertirCadena(char* cadena);

int main() {
    char cadena[MAX_LENGTH];

    printf("Introduce una cadena de caracteres: ");
    leerCadena(cadena);

    printf("La cadena invertida es: ");
    invertirCadena(cadena);

    return 0;
}

void leerCadena(char* cadena) {
    int i = 0;
    char c;

    while ((c = getchar()) != '\n' && c != ' ' && i < MAX_LENGTH) {
        cadena[i++] = c;
    }

    cadena[i] = '\0';
}

void invertirCadena(char* cadena) {
    int longitud = strlen(cadena);

    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }

    printf("\n");
}
