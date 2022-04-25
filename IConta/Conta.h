#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"

using namespace std;

class Conta : public IConta {

public:
    Conta();
    Conta(string nomeCliente, float numeroConta, float salarioMes);
    ~Conta();

    virtual void definirLimite();
    void sacar(double V);
    void depositar(double V);
    double saldoTotalDisponivel();

    string getNome();
    float getNumero();
    float getSalario();

protected:
    string nomeCliente;
    double numeroConta, salarioMes, saldo, limite;

private:

};

#endif