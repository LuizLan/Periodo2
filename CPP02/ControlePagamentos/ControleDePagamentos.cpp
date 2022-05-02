#include "ControleDePagamentos.h"

ControleDePagamentos::ControleDePagamentos()
{

}

ControleDePagamentos::~ControleDePagamentos()
{

}

void ControleDePagamentos::setPagamento(Pagamento P){
    pagamentos.push_back(P);
}

Pagamento ControleDePagamentos::getPagamento(int I){
    return pagamentos.at(I);
}

float ControleDePagamentos::calculaTotalDePagamentos(){
    float total = 0;

    for(Pagamento valor : pagamentos){
        total = total + valor.getValorPagamento();
    }
}

int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){
    
    int i = 0;
    
    for(Pagamento nome : pagamentos){

        
        if(nome.getNomeFuncionario().find(nomeFuncionario) != string::npos){
            return i;
        }
        
        i++;
    }
    return -1;
}