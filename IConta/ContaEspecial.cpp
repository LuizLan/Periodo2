#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial()
{

}

ContaEspecial::ContaEspecial(string nome, float numero, float salario){
    
    nomeCliente = nome;
    numeroConta = numero;
    salarioMes = salario;

    saldo = 0;
}

ContaEspecial::~ContaEspecial()
{

}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMes;
}