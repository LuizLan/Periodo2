#include"Insumos.h"

#pragma once

class Medicamento:public Insumos{

public:
    Medicamento();
    Medicamento(string tipo, string nome, string vencimento, string fabricante, int qntd, float valor, string Dose, string admin, int dispo);
    ~Medicamento();

protected:
    string dosagem, administracao;
    int disponibilidade;


private:

};