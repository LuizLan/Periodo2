#include"Funcionario.h"

#pragma once

class Horista: public Funcionario{

public:
    Horista();
    Horista(string nome, int matricula, double salarioHora, double horasTrab);
    virtual ~Horista();

    double calculaSalario();

protected:

private:
    double salarioHora, horasTrab;
};