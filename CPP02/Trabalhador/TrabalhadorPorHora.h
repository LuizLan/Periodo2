#include "Trabalhador.h"

#pragma once

class TrabalhadorPorHora:public Trabalhador{

public:

    TrabalhadorPorHora();
    TrabalhadorPorHora(float valorDaHora);
    ~TrabalhadorPorHora();

    float calcularPagamentoSemanal(int horas);

private:

    float valorDaHora;

};