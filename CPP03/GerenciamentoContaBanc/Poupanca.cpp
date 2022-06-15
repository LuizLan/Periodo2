#include "Poupanca.h"

Poupanca::Poupanca(int var, double taxa, string nome, int num, double saldo) 
: Conta(nome, num, saldo){
    variacao = var;
    taxaRend = taxa;
}

double Poupanca::render(){
    if(variacao == 51){
        return (saldo * taxaRend);
    }
    else{
        return (saldo * (taxaRend + 0.005));
    }
}
