#include <stdio.h>

int main()
{
    int tabla[4][4];
    int i, j;

    int combinaciones[4][2] = {
        {0, 0},
        {0, 1},
        {1, 0},
        {1, 1}
    };

    for(i = 0; i < 4; i++) {
        tabla[i][0] = combinaciones[i][0];
        tabla[i][1] = combinaciones[i][1];
        tabla[i][2] = tabla[i][0] && tabla[i][1]; 
        tabla[i][3] = tabla[i][0] || tabla[i][1]; 
    }

    printf("A | B | AND | OR\n");
    printf("-----------------\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("%d   ", tabla[i][j]);
        }
        printf("\n");
    }

    return 0;
}
