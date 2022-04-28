#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include<string>

using namespace std;

class Funcionario{

private:
    string nome, sobrenome;
    float salario;

public:
    Funcionario();
    Funcionario(string N, string S, float Sal);

    void setNome(string N);
    string getNome();
    void setSobrenome(string S);
    string getSobremome();
    void setSalario(float S);
    float getSalario();

    float getSalarioAnual();
    void aumentaSalario(float A);
};

#endif