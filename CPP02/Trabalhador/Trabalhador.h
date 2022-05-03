#include<string>

#pragma once

using namespace std;

class Trabalhador{

public:
    Trabalhador();
    ~Trabalhador();

    string getNome();
    float getSalario();
    void setNome(string nome);
    void setSalario(float salario);
    virtual float calcularPagamentoSemanal();
    virtual float calcularPagamentoSemanal(int H);

protected:

    string nome;
    float salario;

private:

};