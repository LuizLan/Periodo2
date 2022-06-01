#include"Insumos.h"

#pragma once

class Vacina:public Insumos{

public:
    Vacina();
    Vacina(string tipo, string nome, string vencimento, string fabricante, int qntd, float valor, string tipoV, int qntdDos, int intervalo);
    ~Vacina();

protected:
    string tipoV;
    int intervalo, qntdDos;

private:

};