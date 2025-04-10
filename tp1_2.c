#include <stdio.h>

int cuadrado(int num) {
    return num * num;
}

void cuadrado_void(int num) {
    int resultado = num * num;
    printf("El cuadrado (usando void) es: %d\n", resultado);
}

void mostrarDireccionYContenido(int *ptr) {
    printf("Dirección de memoria: %p\n", ptr);
    printf("Contenido: %d\n", *ptr);
}

void Invertir(int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b); 
    }
}

void procesarPares() {
    int x, y;

    printf("Ingrese el primer número: ");
    scanf("%d", &x);
    printf("Ingrese el segundo número: ");
    scanf("%d", &y);

    printf("\nMostrando cuadrado de %d\n", x);
    printf("Cuadrado (retorno): %d\n", cuadrado(x));
    cuadrado_void(x);

    printf("\n-> Dirección y contenido de x:\n");
    mostrarDireccionYContenido(&x);

    printf("\nInvirtiendo x e y\n");
    invertir(&x, &y);
    printf("x: %d, y: %d\n", x, y);

    printf("\nOrdenando x e y\n");
    orden(&x, &y);
    printf("Ordenado: x (menor) = %d, y (mayor) = %d\n", x, y);
}

int main() {
    procesarPares();
    return 0;
}
