#include "Conta.h"

Conta::Conta(string nome, int numero, double saldo){
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
}
void Conta::depositar(double depo){
    saldo += depo;
}
void Conta::sacar(double saque){
    if(saque > saldo){
        cout << endl << "saldo insuficiente" << endl;
    }
    else{
        saldo -= saque;
    }
}