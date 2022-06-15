#include "ContaCorrente.h"

ContaCorrente::ContaCorrente(double sal, string nome, int num, double saldo)
: Conta(nome, num, saldo){
    this->salario = sal;
    setLimite();
}
void ContaCorrente::setLimite(){
    limite = salario * 2;
}
double ContaCorrente::total(){
    return (saldo + limite);
};