#include"Imovel.h"
#include"Casa.h"
#include"Terreno.h"
#include"Apartamento.h"

#pragma once

class Imobiliaria{

public:
    Imobiliaria();
    virtual ~Imobiliaria();

    void addImovel(Imovel* imovel);
    void buscaImovel(string busca);
    void setAtributos(int i);
    void getAtributos(int i);

protected:

private:
    vector<Imovel*> imob;
};