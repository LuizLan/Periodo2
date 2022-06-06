#include "Horista.h"

Horista::Horista(){

}
Horista::Horista(string nome, int matricula, double salarioHora, double horasTrab){
    setNome(nome);
    setMatricula(matricula);
    this->salarioHora = salarioHora;
    this->horasTrab = horasTrab;
}
Horista::~Horista(){

}

double Horista::calculaSalario(){
    return salarioHora*horasTrab;
}