#include "Horista.h"

Horista::Horista(){

}
Horista::Horista(string nome, int matricula, double hora, double htrab){
    setNome(nome);
    setMatricula(matricula);
    salarioHora = hora;
    horasTrab = htrab;
}
Horista::~Horista(){

}

double Horista::calculaSalario(){
    double salario;

    if (horasTrab > 40){
        salario = salarioHora * 40;
        salario += salarioHora * (horasTrab - 40) * 1.5;
    }else{
        salario = salarioHora * horasTrab ;
    }

    return salario*4;
}