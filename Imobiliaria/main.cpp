#include<iostream>
#include<string>
#include"Imovel.h"
#include"Casa.h"
#include"Apartamento.h"
#include"Terreno.h"

using namespace std;

int main(){

    Imovel *imoveis[100];
    int i, qntd, tipo;

    cin >> qntd;

    for ( i = 0; i < qntd; i++){

        cin >> tipo;

        switch (tipo){

        case 0:
            cout << "Invalido";
            break;

        case 1:
            imoveis[i] = new Casa();

            break;
        case 2:
            imoveis[i] = new Apartamento();

            break;
        case 3:
            imoveis[i] = new Terreno();

            break;
        default:
            cout << "Invalido";
            break;
        }
        imoveis[i]->lerAtributos();
    }
    
    for ( i = 0; i < qntd; i++){
            imoveis[i]->exibeAtributos();
    }

    return 0;
}