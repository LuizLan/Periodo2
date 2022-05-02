#include"Endereco.h"
#include<string>

#pragma once

using namespace std;

class Pessoa : public Endereco{

public:

    Pessoa();
    Pessoa(string N);
    Pessoa(string N, Endereco E, string T);
    ~Pessoa();

    string toString();

private:
    string nome, telefone;
    Endereco endereco;
};