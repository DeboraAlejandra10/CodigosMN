#include <stdio.h>
#include <stdio.h>

int main() {
    float radio;
    float area;
    float* p_area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    p_area = &area;
    *p_area = 3.14159 * radio * radio;

    printf("El area del circulo es: %f\n", *p_area);

    return 0;
}

