#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include<String>

using namespace std;

class Funcionario
{
public:
    Funcionario();
    string nome, sobrenome;
    float salario;

    float getSalarioAnual();

private:

};

#endif