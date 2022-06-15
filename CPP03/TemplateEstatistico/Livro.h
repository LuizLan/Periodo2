#include"Pedido.h"

#pragma once

class Livro{

public:
    Livro();
    Livro(string titulo, int Paginas);
    virtual ~Livro();
    int getTotal();
    void toString();

protected:

private:
    string titulo;
    int paginas;
};