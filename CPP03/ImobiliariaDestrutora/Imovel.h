#ifndef IMOVEL_H
#define IMOVEL_H
#include<string>
#include<vector>
#include<iostream>

#pragma once

using namespace std;

class Imovel{

public:
    Imovel();
    virtual ~Imovel();
    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

    string getNome();
    string getDisponibilidade();

protected:
    string nome, disponibilidade;
    int tipo = -1;
    float valor;

private:
};

#endif