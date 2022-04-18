#include<iostream>
#include<string>
#include<stdio.h>
#include<iomanip>

using namespace std;

typedef struct candidato{
    int registro;
    string classe;
}t_candidato;

int main(){

    int qntd, i, vencedor, flag; /*qntd= qntd de candidato, i = auxiliar, vencedor = indice candidato vencedor*/
    int voto, qntdVoto[100],numeroVoto, votoNulo = 0, flagNulo; /*qntdVoto = qntd voto do candidato i, numeroVoto = numero total de votos, votoNulo = numero de votos nulos, flagNulo = checar se voto foi nulo*/
    float porcVoto[100], porcNulo; /*porcVoto = porcentagem voto do candidato, porcNulo = porcentagem de votos nulos*/
    t_candidato candidato[100];

    cin >> qntd;
    getchar();

    for(i=0; i<qntd; i++){

        cin >> candidato[i].registro;
        getchar();
        getline(cin, candidato[i].classe);
    }

    for ( i = 0; i < 100; i++){
        qntdVoto[i] = 0;
    }

    numeroVoto = 0;
    votoNulo = 0;

    while (1){
        cin >> voto;
        //cin.ignore();
        //printf("voto atual: %d\n", voto);
        flagNulo = 0;

        if(voto <= 0){ 
            break;
        }

        for(i=0; i<qntd; i++){
            if(voto == candidato[i].registro){
                qntdVoto[i]++;
                flagNulo++;
            }
        }
        if(flagNulo==0){
            votoNulo++;
        }
        numeroVoto++;
    }

    //printf("votos nulos: %d \n numero de votos: %d \n qntd voto (0): %d \n qntd voto (1): %d\n qntd voto (2): %d \nqntd voto (3): %d\nqntd voto (4): %d", votoNulo, numeroVoto, qntdVoto[0], qntdVoto[1], qntdVoto[2], qntdVoto[3], qntdVoto[4]);

    vencedor = 0;

    for (i = 0; i < qntd-1; i++){
        if(qntdVoto[vencedor] < qntdVoto[i+1]){
            vencedor = i+1; 
        }
    //printf("vencedor atual: %d\n", vencedor);
    }

    cout << fixed << setprecision(2);

    for (i = 0; i < qntd; i++){

        porcVoto[i] = (100.0*qntdVoto[i])/numeroVoto;

        cout << porcVoto[i] << " - " << candidato[i].registro << " - " << candidato[i].classe;
        if(i == vencedor){
            cout << " VENCEDOR";
        }
        cout << endl;
    }

    porcNulo = (100.0*votoNulo)/numeroVoto;

    cout << porcNulo << " - Nulos";
    
    return 0;
}