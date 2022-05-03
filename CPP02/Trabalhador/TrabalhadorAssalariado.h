#include "Trabalhador.h"

#pragma once

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{

public:
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(float salario);
    ~TrabalhadorAssalariado();

    float calcularPagamentoSemanal();

private:

};