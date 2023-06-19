#include <stdio.h>
#include <stdlib.h>

void imprimirArregloTridimensional(int x, int y, int z) {
    int arreglo[x][y][z];

    // Inicializar todas las matrices del arreglo en ceros
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                arreglo[i][j][k] = 0;
            }
        }
    }

    // Inicializar la última matriz del arreglo en unos
    for (int j = 0; j < y; j++) {
        for (int k = 0; k < z; k++) {
            arreglo[x-1][j][k] = 1;
        }
    }

    // Imprimir el arreglo tridimensional
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                printf("%d ", arreglo[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

int main() {
    int x, y, z;

    printf("Ingrese las dimensiones del arreglo tridimensional:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);

    imprimirArregloTridimensional(x, y, z);

    return 0;
}
