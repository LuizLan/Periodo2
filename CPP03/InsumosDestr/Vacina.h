#include"Insumos.h"

#pragma once

class Vacina:public Insumos{

public:
    Vacina();
    Vacina(string nome, string vencimento, string fabricante, float qntd, float valor, string tipoV, int qntdDos, int intervalo);
    ~Vacina();

protected:
    string tipoV;
    int intervalo, qntdDos;

private:

};