#include<string>
#include<vector>
#include<iostream>

#pragma once

using namespace std;

class Pedido{

public:
    Pedido();
    Pedido(string descricao, float numero, float qntd, float preco);
    ~Pedido();

    float getTotal();
    float getNumero();
    float getQntd();
    float getPreco();
    string getDescricao();

    void setQntd(float Q);

private:

    string descricao;
    float preco, numero, qntd;

};