#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario()
{

}   

Funcionario::Funcionario(string N, string S, float Sal){
    nome = N;
    sobrenome = S;
    salario = Sal;
}   

void Funcionario::setNome(string N){
    nome = N;
}
string Funcionario::getNome(){
    return nome;
}
void Funcionario::setSobrenome(string S){
    sobrenome = S;
}
string Funcionario::getSobremome(){
    return sobrenome;
}
void Funcionario::setSalario(float S){
    salario = S;
}
float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalarioAnual(){
    return salario*12;
}

void Funcionario::aumentaSalario(float porc){
    salario = salario + salario*porc;
}