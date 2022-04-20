#include "GerenciadorEleitores.h"

GerenciadorEleitores::GerenciadorEleitores()
{

}

GerenciadorEleitores::~GerenciadorEleitores()
{

}

void GerenciadorEleitores::cadastrarEleitor(string N, int I, int T, int P){
    eleitores[P] = Eleitor(N, I, T);
}


void GerenciadorEleitores::verificaMenoridade(int P){
    if (eleitores[P].getIdade() < 16){

    }
}

void GerenciadorEleitores::verificaMaioridade(int P){
    if (eleitores[P].getIdade() > 20){

    }
}

void GerenciadorEleitores::verificaEleitor(int P){

}