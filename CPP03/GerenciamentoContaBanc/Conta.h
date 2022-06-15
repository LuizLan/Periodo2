#include <iostream>
#include <string>

using namespace std;

#pragma once

class Conta{
    protected:
        string nome;
        int numero;
        double saldo;

    public: 
        Conta(string = "Undefined", int = 0, double = 0.0);

        void setNome(string nome) { this->nome = nome; };
        void setNumero(int num) { this->numero = num; };
        void setSaldo(double salario) { this->saldo = salario; };
        string getNome() { return this->nome; };
        int getNumero() { return this->numero; };
        double getSaldo() { return this->saldo; };

        void sacar(double);
        void depositar(double);
};