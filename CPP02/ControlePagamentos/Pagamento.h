#include<string>
#include<vector>

#pragma once

using namespace std;

class Pagamento
{
public:
    Pagamento();
    ~Pagamento();

    float getValorPagamento();
    string getNomeFuncionario();
    void setValorPagamento(float P);
    void setNomeFuncionario(string N);


private:

    float valorPagamento;
    string nomeDoFuncionario;
};