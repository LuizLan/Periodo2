#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int esparsa(int matriz[][50], int lon, int lat){

    int i, j;
    float controle, qntd;

    controle = (lon * lat) * 0.7;
    qntd = 0;

    for(i=0; i<lon; i++){

        for(j=0; j<lat; j++){
            printf("matriz[%d][%d] = %d\n", i,j, matriz[i][j]);
            if(matriz[i][j] == 0){
                qntd++;
            }
        }
    }

    printf("qntd de 0: %f\n", qntd);

    printf("controle: %f\n", controle);

    if(qntd >= controle){
        return 1;
    }else{
        return 0;
    }
}
 
int main() {

    setlocale(LC_ALL,"");

    int lon, lat, i, j;
    int matriz[50][50];

    scanf("%d%d", &lon, &lat);

    for(i=0; i<lon; i++){

        for(j=0; j<lat; j++){

            scanf("%d", &matriz[i][j]);
        }
    }

    if(esparsa(matriz, lon, lat)){
        printf("A matriz é esparsa\n");
    }else{
        printf("A matriz não é esparsa\n");
    }
    
    return 0;
}