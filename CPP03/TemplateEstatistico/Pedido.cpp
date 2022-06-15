#include "Pedido.h"

Pedido::Pedido(){

}
Pedido::Pedido(float valor, int quant){
    valorUni = valor;
    qntd = quant;
}
Pedido::~Pedido(){

}

float Pedido::getTotal(){
    return valorUni*qntd;
}

void Pedido::toString(){
    cout <<"R$ " << valorUni << ", quant: " << qntd << ", total: R$ " << getTotal() << endl;
}