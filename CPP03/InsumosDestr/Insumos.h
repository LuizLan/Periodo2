#include<iostream>
#include<string>

#pragma once

using namespace std;

class Insumos{

public:
    Insumos();
    Insumos(string tipoInsu, string nome, string vencimento, string fabricante, int qntd, float valor);
    virtual ~Insumos();

protected:

private:
    string nome, vencimento, fabricante, tipoInsu;
    int qntd;
    float valor;

};