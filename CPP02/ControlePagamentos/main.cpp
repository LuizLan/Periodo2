#include<iostream>
#include"Pagamento.h"
#include"ControleDePagamentos.h"

using namespace std;

int main(){

    ControleDePagamentos controlador;
    Pagamento pagamento01;
    int qntd, i;
    float valor;
    string nome;

    cin >> qntd; //qntd de pagamentos a ser realizados

    for ( i = 0; i < qntd; i++){
        cin >> valor;
        pagamento01.setValorPagamento(valor);
        cin.ignore();
        getline(cin, nome);
        pagamento01.setNomeFuncionario(nome);

        controlador.setPagamento(pagamento01);
    }
    
    getline(cin,nome);

    i = controlador.getIndexFuncionario(nome);

    if( i == -1){
        cout << nome << " não encontrado(a)." << endl;
        cout << "Total: R$ " <<controlador.calculaTotalDePagamentos() << endl;
    }else{
        cout << controlador.getPagamento(i).getNomeFuncionario() << ": " << "R$ " << controlador.getPagamento(i).getValorPagamento() << endl;
        cout << "Total: R$ " <<controlador.calculaTotalDePagamentos() << endl;
    }

    return 1;
}