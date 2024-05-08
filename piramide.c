//Labo4, paso 3

//Impresión de números

#include <stdio.h>

int main() {
    int n;

    // Solicitar al usuario el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    // Iterar sobre cada fila de la pirámide
    for (int i = 0; i < n; i++) {
        // Imprimir espacios en blanco antes de los números a la izquierda
        for (int j = 0; j < n - i - 1; j++) {
            printf("   ");
        }

        // Imprimir números ascendentes a la izquierda
        for (int j = i + 1; j > 0; j--) {
            printf("%2d ", j);
        }

        // Imprimir números ascendentes a la derecha
        for (int j = 2; j <= i + 1; j++) {
            printf("%2d ", j);
        }

        // Imprimir un salto de línea al final de cada fila
        printf("\n");
    }

    return 0;
}
