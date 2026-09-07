#include <stdio.h>

int vector[6],x,j;

int main()
{
    for(x=0;x<6;x++){
        printf("Ingrese el número a guardar: ");
        scanf("%d",&vector[x]);
    }
    for(j=0;j<6;j++){
        printf("\nSe ingresó el número:%d",vector[j]);
    }

    return 0;
}
