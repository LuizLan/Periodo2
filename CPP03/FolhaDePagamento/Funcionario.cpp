#include "Funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){

}

string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string N){
    nome = N;
}
void Funcionario::setMatricula(int M){
    matricula = M;
}