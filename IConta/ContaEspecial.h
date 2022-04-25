#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include"Conta.h"

using namespace std;

class ContaEspecial : public Conta
{
public:
    ContaEspecial();
    ContaEspecial(string nomeCliente, float numeroConta, float salarioMes);
    ~ContaEspecial();

    void definirLimite();

private:

};

#endif