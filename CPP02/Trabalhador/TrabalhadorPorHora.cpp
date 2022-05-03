#include<iostream>
#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(){

}

TrabalhadorPorHora::TrabalhadorPorHora(float VDH){
    valorDaHora = VDH;
}

TrabalhadorPorHora::~TrabalhadorPorHora(){

}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    float semanal;

    if(horas <= 40){
        semanal = valorDaHora*horas;
    }else{
        semanal = (valorDaHora*40) + ((valorDaHora*1.5)*(horas-40));
    }

    salario = semanal*4;
    
    return semanal;
}