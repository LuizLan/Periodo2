#include"Pedido.h"

#pragma once

class MesaDeRestaurante{

public:
    MesaDeRestaurante();
    ~MesaDeRestaurante();

    void adicionarPedido(Pedido P);

    void zeraPedidos();

    float calculaTotal();

    void exibeConta();

    int getUso();

private:
    vector<Pedido> pedidos;
    int uso;
};