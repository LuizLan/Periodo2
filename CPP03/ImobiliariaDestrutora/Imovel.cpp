#include "Imovel.h"

Imovel::Imovel(){

}

Imovel::~Imovel(){
    cout << "Deletando Imovel" << endl;
}

string Imovel::getNome(){
    return nome;
}
string Imovel::getDisponibilidade(){
    return disponibilidade;
}
