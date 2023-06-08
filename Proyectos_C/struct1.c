#include <stdio.h>
#include <string.h>

// Definición de la estructura empleado
struct empleado {
    char nombre[50];
    char sexo;
    float sueldo;
};

int main() {
    // Declaración de una variable de tipo empleado
    struct empleado emp;

    // Lectura de los datos del empleado
    printf("Ingrese el nombre del empleado: ");
    scanf("%[^\n]", emp.nombre); // se utiliza %[^\n] para permitir espacios en el nombre
    printf("Ingrese el sexo del empleado (M/F): ");
    scanf(" %c", &emp.sexo); // se utiliza un espacio antes de %c para ignorar el salto de línea anterior
    printf("Ingrese el sueldo del empleado: ");
    scanf("%f", &emp.sueldo);

    // Mostrar los datos del empleado
    printf("\nDatos del empleado:\n");
    printf("Nombre: %s\n", emp.nombre);
    printf("Sexo: %c\n", emp.sexo);
    printf("Sueldo: %.2f\n", emp.sueldo);

    return 0;
}

