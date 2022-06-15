#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

#pragma once

class Pedido{

public:
    Pedido();
    Pedido(float valor, int quant);
    virtual ~Pedido();
    float getTotal();
    void toString();
protected:

private:
    float valorUni;
    int qntd;
};