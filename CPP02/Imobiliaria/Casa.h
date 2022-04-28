#ifndef CASA_H
#define CASA_H
#include"Imovel.h"

#pragma once

class Casa:public Imovel
{
public:
    Casa();

    void exibeAtributos();
    void lerAtributos();

private:

    int pavimentos, quartos;
    float areaTerr, areaConst;

};

#endif