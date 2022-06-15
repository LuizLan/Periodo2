#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(double sal, string nome, int num, double saldo)
:ContaCorrente(sal, nome, num, saldo){
    setLimite();
}
void ContaEspecial::setLimite(){
    limite = salario * 4;
}