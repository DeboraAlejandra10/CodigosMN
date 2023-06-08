#include <stdio.h>
#include <string.h>

struct empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    struct empleado empleados[5];
    float sueldo_min = 0;

    // Leer información de empleados
    for (int i = 0; i < 5; i++) {
        printf("Ingrese información del empleado %d:\n", i+1);
        printf("Nombre: ");
        scanf("%s", &empleados[i].nombre);
        printf("Sexo (M/F): ");
        scanf(" %c", &empleados[i].sexo);
        printf("Sueldo: ");
        scanf("%f", &empleados[i].sueldo);

        // Actualizar sueldo mínimo
        if (i == 0 || empleados[i].sueldo < sueldo_min) {
            sueldo_min = empleados[i].sueldo;
        }

        printf("\n");
    }

    // Mostrar información de empleados
    printf("Información de empleados:\n");
    for (int i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i+1);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Sexo: %c\n", empleados[i].sexo);
        printf("Sueldo: %.2f\n", empleados[i].sueldo);
        printf("\n");
    }

    // Mostrar empleado con menor sueldo
    printf("Empleado con menor sueldo:\n");
    for (int i = 0; i < 5; i++) {
        if (empleados[i].sueldo == sueldo_min) {
            printf("Nombre: %s\n", empleados[i].nombre);
            printf("Sexo: %c\n", empleados[i].sexo);
            printf("Sueldo: %.2f\n", empleados[i].sueldo);
            printf("\n");
            break;
        }
    }

    return 0;
}
