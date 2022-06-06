#include "Pessoa.h"

Pessoa::Pessoa(){

}
Pessoa::Pessoa(int tipo, string nome, string telefone){
    this->tipo = tipo;
    this->nome = nome;
    this->telefone = telefone;
}
Pessoa::Pessoa(int tipo, string nome, string telefone, string cpf){
    this->tipo = tipo;
    this->nome= nome;
    this->telefone = telefone;
    this->cpf = cpf;
}
Pessoa::~Pessoa(){

}