#include"FiguraGeometrica.h"

#pragma once

class Circulo:public FiguraGeometrica{

public:
    Circulo();
    ~Circulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float raio;
};