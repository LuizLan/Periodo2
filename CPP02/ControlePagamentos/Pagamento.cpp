#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento(){

    valorPagamento = 0;

}

Pagamento::~Pagamento()
{

}

float Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeFuncionario(){
    return nomeDoFuncionario;
}
void Pagamento::setValorPagamento(float P){
    valorPagamento = P;
}
void Pagamento::setNomeFuncionario(string N){
    nomeDoFuncionario = N;
}