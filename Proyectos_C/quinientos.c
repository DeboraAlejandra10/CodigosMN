#include <stdio.h>
#include <stdlib.h>

int main(){
       float numero=1;
       float cua;
       float cubo;
       while(numero <= 500){
        cua= numero*numero;
        cubo= numero * numero * numero;
        printf(" Su cuadrado es: %f,", cua);
        printf(" Su cubo es: %f\n", cubo);
        numero ++;
       }
       system("Pause");
       return 0;
}