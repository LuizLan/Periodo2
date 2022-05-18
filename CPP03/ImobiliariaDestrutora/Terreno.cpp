#include<iostream>
#include "Terreno.h"

using namespace std;

Terreno::Terreno()
{
    nome = "Terreno";
}

Terreno::~Terreno(){
    cout << "Deletando Terreno" << endl;
}

void Terreno::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> area;
}

void Terreno::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valor << endl;

}