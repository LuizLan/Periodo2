#include<string>
#include<iostream>
#include<vector>
#include<exception>

using namespace std;

#pragma once

class Funcionario{

public:
    Funcionario();
    virtual ~Funcionario();

    string getNome();
    int getMatricula();

    void setNome(string N);
    void setMatricula(int M);

    virtual double calculaSalario() = 0;

protected:
    
private:
    string nome;
    int matricula;
};