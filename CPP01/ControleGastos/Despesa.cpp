#include "Despesa.h"

Despesa::Despesa(){
    valor = 0;

}
void Despesa::setNome(string N){
    nome = N;
}
string Despesa::getNome(){
    return nome;
}
void Despesa::setTipo(string T){
    tipo = T;
}
string Despesa::getTipo(){
    return tipo;
}
int Despesa::setValor(float V){
    valor = V;
}
float Despesa::getValor(){
    return valor;
}