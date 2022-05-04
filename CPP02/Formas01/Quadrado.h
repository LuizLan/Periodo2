#include"FiguraGeometrica.h"

#pragma once

class Quadrado:public FiguraGeometrica{

public:
    Quadrado();
    ~Quadrado();

    void lerAtributosArea();
    float calcularArea();

private:
    float lado;
};