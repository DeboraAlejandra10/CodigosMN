#include <stdio.h>
//función recursiva que recibe como parámetro un número n y devuelve el factorial de ese número.
//iene dos casos base, que son n == 0 y n == 1, ya que el factorial de 0 y 1 es 1. 
//En el caso recursivo, se multiplica n por el factorial del número n - 1.

int factorial(int n) {
    if (n == 0 || n == 1) { // Casos base
        return 1;
    } else { // Caso recursivo
        return n * factorial(n - 1);
    }
}

void imprimir_factorial(int n, int i) {
    if (i > 0) {
        printf("%d! = %d\n", i, factorial(i));
        imprimir_factorial(n, i - 1);
    }
}

int main() {
    int n;
    printf("Ingrese un numero para calcular su factorial:\n");
    scanf("%d", &n);
    imprimir_factorial(n, n);
    return 0;
}

