#include <stdio.h>

int main() {
    const float PI = 3.14159; // constante para el valor de PI
    float diametro = 10; // diámetro del círculo en metros
    float radio = diametro / 2; // radio del círculo en metros
    float area = PI * radio * radio; // fórmula para calcular el área del círculo

    printf("El área del círculo es: %.2f metros cuadrados\n", area);

    return 0;
}
