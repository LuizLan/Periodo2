#include<string>

#pragma once

using namespace std;

class Endereco{

public:

    Endereco();
    Endereco(string R, string B, string C, string E, string CEP, int N);
    ~Endereco();

    virtual string toString();

private:

    string rua, bairro, cidade, estado, CEP;
    int numero;

};