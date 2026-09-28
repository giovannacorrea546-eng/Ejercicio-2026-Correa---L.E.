#include <stdio.h>

int vector[5], x;
int posicion;

int main()
{

    for(x = 0; x < 5; x++) {
        printf("Indique el numero a guardar en la posicion %d: ", x);
        scanf("%d", &vector[x]);
    }
    
    do {
        printf("\nIngrese la posicion a ver (0 a 4) o -1 para salir: ");
        scanf("%d", &posicion);
        
        if(posicion >= 0 && posicion < 5) {
            printf("El dato en la posicion %d es: %d\n", posicion, vector[posicion]);
        } 
        else if(posicion != -1) {
            printf("Posicion invalida. Intente de nuevo.\n");
        }
        
    } while(posicion != -1);
    
    printf("\nPrograma finalizado.\n");

    return 0;
}
