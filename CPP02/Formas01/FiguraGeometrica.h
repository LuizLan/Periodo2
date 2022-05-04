#include<iostream>
#include<string>

#pragma once

using namespace std;

class FiguraGeometrica{

public:
    FiguraGeometrica();
    FiguraGeometrica(int Tipo);
    ~FiguraGeometrica();

    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    string getNome();

protected:
    string nome;
    int tipo;

private:

};