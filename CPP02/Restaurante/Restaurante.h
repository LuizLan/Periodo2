#include"MesaDeRestaurante.h"
#pragma once

class Restaurante{

public:
    Restaurante();
    ~Restaurante();

    void adicionarPedido(Pedido Pedido, int Mesa);
    float calculaTotalRestaurante();
    MesaDeRestaurante getMesa(int Mesa);

private:
    MesaDeRestaurante mesas[30];
};