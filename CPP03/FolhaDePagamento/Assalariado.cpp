#include "Assalariado.h"

Assalariado::Assalariado(){

}
Assalariado::Assalariado(string nome, int matricula, double salario){
    setNome(nome);
    setMatricula(matricula);
    this->salario = salario;
}
Assalariado::~Assalariado(){

}

double Assalariado::calculaSalario(){
    return salario;
}