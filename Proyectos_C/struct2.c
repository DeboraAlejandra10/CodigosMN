#include <stdio.h>
#include <string.h>

// Definición de la estructura atleta
struct atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int n_medallas;
};

int main() {
    // Declaración de una variable de tipo atleta
    struct atleta atl;

    // Lectura de los datos del atleta
    printf("Ingrese el deporte del atleta: ");
    scanf("%[^\n]", atl.deporte); // se utiliza %[^\n] para permitir espacios en el deporte
    printf("Ingrese el nombre del atleta: ");
    scanf(" %[^\n]", atl.nombre); // se utiliza un espacio antes de %[^\n] para ignorar el salto de línea anterior
    printf("Ingrese el país del atleta: ");
    scanf(" %[^\n]", atl.pais); // se utiliza un espacio antes de %[^\n] para ignorar el salto de línea anterior
    printf("Ingrese el número de medallas del atleta: ");
    scanf("%d", &atl.n_medallas);

    // Mostrar los datos del atleta
    printf("\nDatos del atleta:\n");
    printf("Deporte: %s\n", atl.deporte);
    printf("Nombre: %s\n", atl.nombre);
    printf("País: %s\n", atl.pais);
    printf("Número de medallas: %d\n", atl.n_medallas);

    return 0;
}
