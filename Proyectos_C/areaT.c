#include <stdio.h>
#include <math.h>

float calcular_AreaTriangulo(float a, float b, float c) {

    float p= (a + b + c)/2;
    float area= sqrt(p *(p-a) * (p-b) * (p-c));

    return area;
}

int main() {
    float a, b, c;
    printf("Ingrese las longitudes de los lados del triangulo:\n");
    scanf("%f%f%f", &a, &b, &c);

    float area = calcular_AreaTriangulo(a, b, c);
    printf("El area del triangulo es: %f\n", area);

    return 0;
}
