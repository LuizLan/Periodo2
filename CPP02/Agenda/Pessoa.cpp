#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string N){
    nome = N;
}

Pessoa::Pessoa(string N, Endereco E, string T){
    nome = N;
    endereco = E;
    telefone = T;
}

Pessoa::~Pessoa()
{

}

string Pessoa::toString(){
    
    string contato;

    contato = nome + ", " + telefone + "\n" + endereco.toString();

    return contato;
}