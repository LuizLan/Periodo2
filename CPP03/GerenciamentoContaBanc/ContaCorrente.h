#include"Conta.h"

#pragma once

class ContaCorrente : public Conta{
    protected:
        double salario;
        double limite;

    public:
        ContaCorrente(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setSalario(double sal) { this->salario = sal; };
        void setLimite(double lim) { this->limite = lim; };
        double getSalario() { return this->salario; };
        double getLimite() { return this->limite; };

        double total();
        void setLimite();
};