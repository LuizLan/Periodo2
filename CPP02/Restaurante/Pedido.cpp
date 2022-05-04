#include "Pedido.h"

Pedido::Pedido(){
    descricao = -1;
    numero = -1;
    qntd = -1;
    preco = -1;

}

Pedido::Pedido(string D, float Num, float Q, float P){
    
    descricao = D;
    numero = Num;
    qntd = Q;
    preco = P;
}

Pedido::~Pedido(){

}

float Pedido::getTotal(){
    float total = preco*qntd;

    return total;
}
float Pedido::getNumero(){
    return numero;
}
float Pedido::getQntd(){
    return qntd;
}
float Pedido::getPreco(){
    return preco;
}
string Pedido::getDescricao(){
    return descricao;
}

void Pedido::setQntd(float Q){
    qntd = Q;
}