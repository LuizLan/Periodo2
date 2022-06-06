#include "Comissionado.h"

Comissionado::Comissionado(){

}
Comissionado::Comissionado(string nome, int matricula, double vendasSemana, double porcentualComiss){
    setNome(nome);
    setMatricula(matricula);
    this->vendasSemana = vendasSemana;
    this->percentualComiss = porcentualComiss;
}
Comissionado::~Comissionado(){

}

double Comissionado::calculaSalario(){
    return vendasSemana*percentualComiss;
}