#include <stdio.h>

int main() {
    float radio;
    float area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    area = 3.14159 * radio * radio;

    printf("El area del circulo es: %f\n", area);

    return 0;
}
