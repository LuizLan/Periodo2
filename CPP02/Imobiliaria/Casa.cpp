#include<iostream>
#include "Casa.h"

using namespace std;
    
Casa::Casa()
{
    nome = "Casa";

}

void Casa::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> pavimentos;
    cin >> quartos;
    cin >> areaTerr;
    cin >> areaConst;
}

void Casa::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << pavimentos << " pavimentos, " << quartos << " quartos " << areaTerr  << "m2 de área de terreno e " << areaConst << "m2 de área construida. R$ " << valor << "." << endl;

}