#ifndef ELEITOR_H
#define ELEITOR_H
#include<string>
#include<exception>

using namespace std;

#pragma once

class Eleitor
{
public:

    Eleitor();
    Eleitor(string N, int I, int T);
    ~Eleitor();

    string getNome();
    int getIdade();
    int getTitulo();

private:

    string nome;
    int idade, titulo;

};

#endif