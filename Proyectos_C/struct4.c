#include <stdio.h>
#include <string.h>

struct atleta {
    char deporte[50];
    char nombre[50];
    char pais[50];
    int n_medallas;
};

int main() {
    struct atleta atletas[10];
    int max_medallas = 0;
    int idx_max_medallas = -1;

    // Leer información de atletas
    for (int i = 0; i < 10; i++) {
        printf("Ingrese información del atleta %d:\n", i+1);
        printf("Deporte: ");
        scanf("%s", &atletas[i].deporte);
        printf("Nombre: ");
        scanf("%s", &atletas[i].nombre);
        printf("País: ");
        scanf("%s", &atletas[i].pais);
        printf("Número de medallas: ");
        scanf("%d", &atletas[i].n_medallas);

        // Actualizar atleta con más medallas
        if (i == 0 || atletas[i].n_medallas > max_medallas) {
            max_medallas = atletas[i].n_medallas;
            idx_max_medallas = i;
        }

        printf("\n");
    }

    // Mostrar información de atletas
    printf("Información de atletas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Atleta %d:\n", i+1);
        printf("Deporte: %s\n", atletas[i].deporte);
        printf("Nombre: %s\n", atletas[i].nombre);
        printf("País: %s\n", atletas[i].pais);
        printf("Número de medallas: %d\n", atletas[i].n_medallas);
        printf("\n");
    }

    // Mostrar atleta con más medallas
    printf("Atleta con más medallas:\n");
    printf("Nombre: %s\n", atletas[idx_max_medallas].nombre);
    printf("País: %s\n", atletas[idx_max_medallas].pais);
    printf("Deporte: %s\n", atletas[idx_max_medallas].deporte);
    printf("Número de medallas: %d\n", atletas[idx_max_medallas].n_medallas);
    printf("\n");

    return 0;
}
