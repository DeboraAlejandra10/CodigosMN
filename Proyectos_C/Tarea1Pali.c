#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
    int i, j, len;
    char palabra[50]; 
    int comp= 1;
    
    printf("Ingrese la palabra: ");
    scanf("%s", palabra);
    
    //calcular longitud de la palabra usando la función strlen
    len = strlen(palabra);
    
    /*Se recore la mitad de la palabra comparando el primer 
    carácter con el último, el segundo con el penúltimo, hasta acabar*/
    for (i=0, j=len-1; i<len/2; i++, j--) {

        /*Si se encuentra un par de caracteres que no son iguales,
         entonces la palabra no es un palíndromo */
        if ((palabra[i]) != (palabra[j])) {
            //La variable comp se establecera en 0, hara break y saldra
            comp= 0;
            break;
        }
    }
    // si comp o sea 1 es 1 imprimira que es un palindromo
    if (comp) {
        printf("%s es un palindromo \n", palabra);
    } else {
        printf("%s no es un palindromo \n", palabra);
    } 
    return 0;
}
//((tolower(palabra[i]) != tolower(palabra[j])) 