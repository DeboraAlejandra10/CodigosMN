#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    long cpu_time_used;

    start=clock(); // registrar el tiempo de inicio

    // Código de la aplicación 
    system("libreoffice --writer");

    end=clock(); // registrar el tiempo de finalización

    cpu_time_used = (long)((end - start)*100000); // calcular el tiempo de CPU utilizado en segundos
    printf("La aplicación LibreOffice tardó %ld ciclos de reloj.\n", cpu_time_used);

    return 0;
}
