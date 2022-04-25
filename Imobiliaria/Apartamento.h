#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include"Imovel.h"

#pragma once

class Apartamento:public Imovel
{
public:
    Apartamento();
    void exibeAtributos();
    void lerAtributos();

private:

    int quartos, andar, garagem;
    float area, condo;

};

#endif