#include"Conta.h"

#pragma once

class Poupanca : public Conta{
    private:
        int variacao;
        double taxaRend;

    public: 
        Poupanca(int = 0.0, double = 0.006, string = "Undefined", int = 0, double = 0.0);

        void setVariacao(int var) { this->variacao = var; };
        void settaxaRend(double taxa) { this->taxaRend = taxa; };
        int getvariacao() { return this->variacao; }
        double gettaxaRend() { return this->taxaRend; }

        double render();
};