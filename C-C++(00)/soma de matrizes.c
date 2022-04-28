#include <stdio.h>

void somaMatr(int matriz1[][100], int matriz2[][100], int lat, int lon){

    int i, j;
    int matriz3[100][100];


    for(i=0; i<lat; i++){

        for(j=0; j<lon; j++){

            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    for(i=0; i<lat; i++){

        for(j=0; j<lon; j++){

            printf("%d ", matriz3[i][j]);
        }

        printf("\n");
    }
}
 
int main() {

    int matriz1[100][100], matriz2[100][100], matriz3[100][100];
    int i, j;
    int x, y;

    scanf("%d %d%*c", &x, &y);

    for(i=0; i<x; i++){

        for(j=0; j<y; j++){

            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0; i<x; i++){

        for(j=0; j<y; j++){

            scanf("%d", &matriz2[i][j]);
        }
    }

    somaMatr(matriz1, matriz2, x, y);

    return 0;
}