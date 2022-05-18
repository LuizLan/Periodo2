#ifndef TERRENO_H
#define TERRENO_H
#include"Imovel.h"

#pragma once

class Terreno:public Imovel{

public:
    Terreno();
    ~Terreno();
    void exibeAtributos();
    void lerAtributos();

private:
    float area;
    
};

#endif