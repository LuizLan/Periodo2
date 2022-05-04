#include<iostream>
#include<string>

#pragma once

using namespace std;

class Insumos{

public:
    Insumos();
    Insumos(string nome, string vencimento, string fabricante, float qntd, float valor);
    virtual ~Insumos();

protected:
    string nome, vencimento, fabricante;
    int tipoInsu;
    float qntd, valor;

private:

};