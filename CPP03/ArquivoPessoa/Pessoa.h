#include<iostream>
#include<string>

using namespace std;

#pragma once

class Pessoa{

public:
    Pessoa();
    Pessoa(int tipo, string nome, string telefone);
    Pessoa(int tipo, string nome, string telefone, string cpf);
    virtual ~Pessoa();

    void setNome(string N);
    void setTelefone(string T);
    void setCpf(string C);
    void setTipo(int T);

    string getNome();
    string getTelefone();
    string getCpf();
    int getTipo();

protected:

private:
    int tipo;
    string nome, telefone, cpf;
};