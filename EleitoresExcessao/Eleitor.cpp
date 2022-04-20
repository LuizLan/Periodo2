#include "Eleitor.h"

Eleitor::Eleitor(){

}

Eleitor::~Eleitor()
{

}

Eleitor::Eleitor(string N, int I, int T){

    nome = N;
    idade = I;
    titulo = T;

}

    string Eleitor::getNome(){
        return nome;
    }
    int Eleitor::getIdade(){
        return idade;
    }
    int Eleitor::getTitulo(){
        return titulo;
    }
