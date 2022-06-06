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

void Pessoa::setNome(string N){
    nome = N;
}
void Pessoa::setTelefone(string T){
    telefone = T;
}
void Pessoa::setCpf(string C){
    cpf = C;
}
void Pessoa::setTipo(int T){
    tipo = T;
}

string Pessoa::getNome(){
    return nome;
}
string Pessoa::getTelefone(){
    return telefone;
}
string Pessoa::getCpf(){
    return cpf;
}
int Pessoa::getTipo(){
    return tipo;
}