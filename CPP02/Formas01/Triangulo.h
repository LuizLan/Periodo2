#include"FiguraGeometrica.h"

#pragma once

class Triangulo:public FiguraGeometrica{

public:
    Triangulo();
    ~Triangulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float base, altura;
};  