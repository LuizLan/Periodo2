#include"FiguraGeometrica.h"

#pragma once

class Retangulo:public FiguraGeometrica{

public:
    Retangulo();
    ~Retangulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float largura, altura;
};