#include <stdio.h>
#include <string.h>

struct empleado {
    char nom[30];
    char sexo;
    double sueldo;
};

int main() {
    struct empleado empleados[5];
    int i, pos_menor_sueldo = 0;
    double menor_sueldo;

    for (i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i+1);
        printf("Nombre: ");
        scanf("%s", &empleados[i].nom);

        printf("Sexo (M o F): ");
        scanf("%s", &empleados[i].sexo);

        printf("Sueldo: ");
        scanf("%f", &empleados[i].sueldo);
        printf("\n");
    }

    printf("Información de los empleados:\n");
    for (i = 0; i < 5; i++) {
        printf("Empleado %d:\n", i+1);
        printf("Nombre: %s\n", &empleados[i].nom);
        printf("Sexo: %s\n", &empleados[i].sexo);
        printf("Sueldo: %f\n", &empleados[i].sueldo);
        printf("\n");
    }

    menor_sueldo = empleados[0].sueldo;
    for (i = 1; i < 5; i++) {
        if (empleados[i].sueldo < menor_sueldo) {
            menor_sueldo = empleados[i].sueldo;
            pos_menor_sueldo = i;
        }
    }

    printf("Empleado con menor sueldo:\n");
    printf("Nombre: %s\n", &empleados[pos_menor_sueldo].nom);
    printf("Sexo: %s\n", &empleados[pos_menor_sueldo].sexo);
    printf("Sueldo: %f\n", &empleados[pos_menor_sueldo].sueldo);

    return 0;
}

