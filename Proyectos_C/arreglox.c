#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    char* arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    arr = (char*)malloc(x * sizeof(char));

    printf("Ingrese los elementos del arreglo:");
    for (int i = 0; i <= x; i++) {
        scanf("%c", arr + i);
    }

    printf("El arreglo es:");
    for (int i = 0; i <= x; i++) {
        printf("%c ", *(arr + i));
    }

    free(arr);

    return 0;
}
