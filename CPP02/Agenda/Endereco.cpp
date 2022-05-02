#include "Endereco.h"
#include<iostream>

Endereco::Endereco()
{

}

Endereco::Endereco(string R, string B, string C, string E, string CEP, int N){
    rua = R;
    bairro = B;
    cidade = C;
    estado = E;
    this->CEP = CEP;
    numero = N;
}

Endereco::~Endereco()
{

}

string Endereco::toString(){
    string num(to_string(numero));
    string ender;

    ender = rua + ", " + num + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + CEP;

    return ender;
}