#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int* arr;

    printf("Ingrese el tamaño del arreglo: ");
    scanf("%d", &x);

    arr = (int*)malloc(x * sizeof(int));

    printf("Ingrese los elementos del arreglo:\n");
    for (int i = 0; i < x; i++) {
        scanf("%d", arr + i);
    }

    printf("El arreglo es:\n");
    for (int i = 0; i < x; i++) {
        printf("%d ", *(arr + i));
    }

    free(arr);
    return 0;
}
