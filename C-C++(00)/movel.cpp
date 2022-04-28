#include <stdio.h>
#include <string>
#include <iostream>
#include <string.h>

using namespace std;

typedef struct movel{
    string desc;
    float peso;
    char tipo;
} t_movel;

/*void trim(char *str){
    if(str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}*/

int main() {

    t_movel movel[100];
    int i, qntd, numReais, numPesoS, maisPesado;

    scanf("%d", &qntd);
    getchar();

    for(i = 0; i<qntd; i++){

        getline(cin, movel[i].desc);

        scanf("%f", &movel[i].peso);
        getchar();

        scanf("%c", &movel[i].tipo);
        getchar();
    }

    numReais = 0;
    numPesoS = 0;
    maisPesado = 0;

    for(i = 0; i<qntd; i++){
        
        if(movel[i].peso > 10 && movel[i].tipo == 's'){
            numPesoS++;
        }

        int indReal = strlen(movel[i].desc.c_str()) - 4; 
        //printf("fim da descr: %s\n", &movel[i].desc[indReal]);
        if( strstr(&movel[i].desc[indReal], "Real") > 0){
            numReais++;
        }

        if(i<qntd-1 && movel[i+1].peso > movel[maisPesado].peso){
            maisPesado = i+1;
        }
    }
    
    cout << "Tipo 's' acima de 10Kg: " << numPesoS << "\n";
    cout << "Termina em  \"Real\": " << numReais << "\n";
    cout << "Mais pesado: \""<< movel[maisPesado].desc << "\"\n";

    return 0;
}