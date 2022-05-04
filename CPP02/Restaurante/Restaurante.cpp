#include "Restaurante.h"

Restaurante::Restaurante(){

}

Restaurante::~Restaurante(){

}

void Restaurante::adicionarPedido(Pedido Pedido, int Mesa){
    
    mesas[Mesa].adicionarPedido(Pedido);

}

float Restaurante::calculaTotalRestaurante(){
    int i;
    float total = 0;
    
    for ( i = 0; i < 30; i++){
        if (mesas[i].getUso() == 1){
            total += mesas[i].calculaTotal();
        }
    }
    
    return total;
}

MesaDeRestaurante Restaurante::getMesa(int Mesa){
    return mesas[Mesa];
}