#include<iostream>
#include<string>
#include"Imovel.h"
#include"Casa.h"
#include"Apartamento.h"
#include"Terreno.h"
#include"Imobiliaria.h"

using namespace std;

int main(){

    Imobiliaria imobiliaria1;
    int i, qntd, tipo;
    string busca;

    cin >> qntd;

    for ( i = 0; i < qntd; i++){

        cin >> tipo;

        switch (tipo){

        case 0:
            cout << "Invalido";
            break;

        case 1:
            imobiliaria1.addImovel(new Casa());
            break;
        case 2:
            imobiliaria1.addImovel(new Apartamento());
            break;
        case 3:
            imobiliaria1.addImovel(new Terreno());
            break;
        default:
            cout << "Invalido";
            break;
        }
        imobiliaria1.setAtributos(i);
    }
    
    cin >> busca;
    imobiliaria1.buscaImovel(busca);
    
    return 0;
}