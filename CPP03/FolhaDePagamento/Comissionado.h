#include"Funcionario.h"

#pragma once

class Comissionado: public Funcionario{

public:
    Comissionado();
    Comissionado(string nome, int matricula, double vendasSemana, double porcentualComiss);
    virtual ~Comissionado();

    double calculaSalario();

protected:

private:
    double vendasSemana, percentualComiss;
};