#include <stdio.h>
#include <string.h>
#define LONG_MAX 50

void leerCadena(char* cadena);
void invertirCadena(char* cadena);

void leerCadena(char* cadena) {
    int i = 0;
    char c;
     /*Lee caracteres del teclado con getchar hasta que se ingrese un
      espacio, un salto de línea o se alcance el límite de caracteres permitidos*/
    while ((c = getchar()) != '\n' && c != ' ' && i < LONG_MAX) {
        cadena[i++] = c;
    }
    /*La nueva cadena se almacena en el arreglo cadena, y se añade el carácter nulo 
    al final para indicar el final de la cadena*/
    cadena[i] = '\0';
}

void invertirCadena(char* cadena) {
    //strlen para obtener la longitud de la cadena
    int longitud = strlen(cadena);
    /*Recorremos la cadena de atrás hacia adelante imprimiendo 
    cada carácter en orden inverso.*/
    for (int i = longitud-1; i >= 0; i--) {
        printf("%c", cadena[i]);
    }
    printf("\n");
}

int main() {
    char cadena[LONG_MAX];
    //Mandamos llamar las funcines y lo que resulto de su variable cadena
    printf("Introduce tu frase o cadena: ");
    leerCadena(cadena);

    printf("La cadena invertida es: ");
    invertirCadena(cadena);
    return 0;
}