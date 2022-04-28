#ifndef IMOVEL_H
#define IMOVEL_H
#include<string>

#pragma once

using namespace std;

class Imovel{

public:
    Imovel();

    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

protected:
    string nome, disponibilidade;
    int tipo = -1;
    float valor;

private:
};

#endif