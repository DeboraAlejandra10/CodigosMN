#include <stdio.h>
#include <stdlib.h>

int main (){
    // Siempre va \0 porque indica que hasta ahi termino
    // y cuenta como un caracter mas
    char cad[]= "Es una cadena";
    printf("%s \n", cad);
    return 0;
}