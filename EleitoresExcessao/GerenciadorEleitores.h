#ifndef GERENCIADORELEITORES_H
#define GERENCIADORELEITORES_H
#include"Eleitor.h"

#pragma once

using namespace std;

class GerenciadorEleitores: public Eleitor
{
public:
    GerenciadorEleitores();
    ~GerenciadorEleitores();

    void cadastrarEleitor(string N, int I, int T, int P);
    void verificaEleitor(int P);
    
private:

    Eleitor eleitores[100];

    void verificaMenoridade(int P);
    void verificaMaioridade(int P);

};

#endif