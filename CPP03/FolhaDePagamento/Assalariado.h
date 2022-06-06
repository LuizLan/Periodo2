#include"Funcionario.h"

#pragma once

class Assalariado: public Funcionario{

public:
    Assalariado();
    Assalariado(string nome, int matricula, double salario);
    virtual ~Assalariado();

    double calculaSalario();

protected:

private:
    double salario;
};