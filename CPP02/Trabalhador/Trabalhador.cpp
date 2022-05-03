#include<iostream>
#include "Trabalhador.h"

Trabalhador::Trabalhador(){
    salario = 0;
}

Trabalhador::~Trabalhador(){

}

string Trabalhador::getNome(){
    return nome;
}

void Trabalhador::setNome(string N){
    nome = N;
}

float Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setSalario(float S){
    salario = S;
}

float Trabalhador::calcularPagamentoSemanal(){}

float Trabalhador::calcularPagamentoSemanal(int H){}
