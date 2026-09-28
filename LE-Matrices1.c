#include <stdio.h>

int main()
{
    int matriz[3][2][2];
    int i, j, k;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("\nIngrese el valor de la posicion [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matriz[i][j][k]);
            }
        }
    }

    printf("\n--- Matriz Tridimensional ---\n");
    for(i = 0; i < 3; i++) {
        printf("Capa %d:\n", i);
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++) {
                printf("%d ", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
