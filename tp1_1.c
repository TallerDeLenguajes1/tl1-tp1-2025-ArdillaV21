#include <stdio.h>

int main() {
    int valor = 10;
    int *puntero;

    puntero = &valor;

    printf("El contenido del puntero es: %d\n", *puntero);
    printf("La direccion de memoria almacenada por el puntero es: %p\n", puntero);
    printf("La direccion de memoria de la variable es: %p\n", &valor);
    printf("La direccion de memoria del puntero es: %p\n", &puntero);
    printf("El tamaño de memoria utilizado por la variable es: %lu bytes\n", sizeof(valor));

    return 0;
}
