#include "TrabalhadorAssalariado.h"
    
TrabalhadorAssalariado::TrabalhadorAssalariado(){

}

TrabalhadorAssalariado::TrabalhadorAssalariado(float S){
    salario = S;
}

TrabalhadorAssalariado::~TrabalhadorAssalariado(){

}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}