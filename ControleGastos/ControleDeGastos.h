#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include"Despesa.h"

using namespace std;

class ControleDeGastos: public Despesa{

private:
    Despesa despesa[101];
public:
    ControleDeGastos();

    void setDespesa(Despesa d, int i);
    Despesa getDespesa(int i);
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string T);
    bool existeDespesaDoTipo(string T);
    
};

#endif