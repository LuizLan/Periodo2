#include "MesaDeRestaurante.h"

MesaDeRestaurante::MesaDeRestaurante(){
    uso = -1;
}

MesaDeRestaurante::~MesaDeRestaurante(){

}

int MesaDeRestaurante::getUso(){
    return uso;
}

void MesaDeRestaurante::adicionarPedido(Pedido P){

    int i, repetido = 0;
    uso = 1;

    for ( i = 0; i < pedidos.size(); i++){
        if(P.getNumero() == pedidos.at(i).getNumero()){
            float qntd = 0;
            
            qntd = pedidos.at(i).getQntd() + P.getQntd();
            pedidos.at(i).setQntd(qntd);

            repetido = 1;
            break;
        }
    }

    if(repetido == 0){
        pedidos.push_back(P);
    }
}

void MesaDeRestaurante::zeraPedidos(){
    int i;

    for ( i = 0; i < pedidos.size(); i++){
        pedidos.at(i).setQntd(0);    
    }
}

float MesaDeRestaurante::calculaTotal(){
    int i;
    float total;

    total = 0;
    
    for ( i = 0; i < pedidos.size(); i++){
        total += pedidos.at(i).getTotal();
    }

    return total;
}

void MesaDeRestaurante::exibeConta(){
    int i;

    for ( i = 0; i < pedidos.size(); i++){
        cout << pedidos.at(i).getNumero() << " - " << pedidos.at(i).getDescricao() << " - " << pedidos.at(i).getQntd() << " - " << pedidos.at(i).getPreco() <<" - R$" << pedidos.at(i).getQntd()*pedidos.at(i).getPreco() << endl;
    }

    cout << "Total: R$ " <<  calculaTotal() << endl;
}