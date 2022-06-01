#include"Insumos.h"

#pragma once

class Epi:public Insumos{

public:
    Epi();
    Epi(string tipoInsu, string nome, string vencimento, string fabricante, int qntd, float valor, string tipo, string descricao);
    ~Epi();

private:
    string tipo, descricao;
};