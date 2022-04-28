#include "Conta.h"

using namespace std;

Conta::Conta()
{

}

Conta::Conta(string nome, float numero, float salario){

    nomeCliente = nome;
    numeroConta = numero;
    salarioMes = salario;

    saldo = 0;
}

Conta::~Conta()
{

}

void Conta::definirLimite(){
    limite = 2*salarioMes;
}

void Conta::sacar(double V){
    
    if(V > saldoTotalDisponivel()){

        saldo = saldo;
        cout << "saldo indisponivel";   

    }else{

        saldo = saldo - V;

    }

}

void Conta::depositar(double V){
    saldo = saldo + V;
}

double Conta::saldoTotalDisponivel(){

    definirLimite();

    return (saldo + limite);
}

string Conta::getNome(){
    return nomeCliente;
}

float Conta::getNumero(){
    return numeroConta;
}

float Conta::getSalario(){
    return salarioMes;
}