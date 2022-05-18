#include <iostream>
#include "Apartamento.h"

using namespace std;

Apartamento::Apartamento()
{
    nome = "Apartamento";
}
Apartamento::~Apartamento()
{
    cout << "Deletando Apartamento" << endl;
}

void Apartamento::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> area;
    cin >> quartos;
    cin >> andar;
    cin >> condo;
    cin >> garagem;
}

void Apartamento::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área, " << quartos << " quartos " << andar  << " andar(es), " << condo << " de condomínio, " << garagem << " vaga(s) de garagem. R$ " << valor << "." << endl;

}