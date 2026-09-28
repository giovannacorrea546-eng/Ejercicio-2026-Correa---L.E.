#include <stdio.h>

int vector[5], x, j;
int suma = 0;

int main()
{
    for(x = 0; x < 5; x++) {
        printf("Indique el numero a guardar: ");
        scanf("%d", &vector[x]);
    }
    
    for(j = 0; j < 5; j++) {
        suma = suma + vector[j];
    }
    
    printf("\nLa suma de todos los datos es: %d\n", suma);

    return 0;
}
