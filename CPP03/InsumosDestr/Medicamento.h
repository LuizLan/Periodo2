#include"Insumos.h"

#pragma once

class Medicamento:public Insumos{

public:
    Medicamento();
    Medicamento(string nome, string vencimento, string fabricante, float qntd, float valor, string Dose, string admin, string dispo);
    ~Medicamento();

protected:
    string dosagem, administracao, disponibilizacao;


private:

};