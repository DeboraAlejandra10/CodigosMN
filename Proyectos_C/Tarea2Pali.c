#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int contador[26] = {0};
    char palabra[50];
    int i, len;
    
    printf("Ingrese la palabra: ");
    scanf("%s", palabra);
    
    //Calcula la longitud de la palabra usando la función strlen()
    len = strlen(palabra);
    
    /*Se recorre la palabra caracter por caracter con for. 
    Si el caracter actual es una letra, se incrementa el contador 
    correspondiente en el arreglo*/

    for (i = 0; i < len; i++) {
         /*isalpha()función para verificar si el carácter pasado es un 
         alfabeto o no. Devuelve un valor distinto de cero si es un alfabeto;
        si no lo es devuelve 0.*/
        if (isalpha(palabra[i])) {
            /*se resta el valor ASCII de la letra en minúsculas por 
            el valor ASCII de la letra 'a'*/
            contador[tolower(palabra[i]) - 'a']++;
        }
    }
    /*Se recorre el array contador e imprime cada letra junto 
    con sus ocurrencias si este es mayor que cero*/
    printf("Las ocurrencias por letra son:\n");
    for (i = 0; i < 26; i++) {
        if (contador[i] > 0) {
            printf("%c: %d\n", i + 'a',contador[i]);
        }
    }
    return 0;
}

// tolower convierte un tipo de dato carácter a minúscula. 
