#include"Pagamento.h"

#pragma once

class ControleDePagamentos : public Pagamento
{
public:
    ControleDePagamentos();
    ~ControleDePagamentos();
    
    void setPagamento(Pagamento P);
    Pagamento getPagamento(int I);
    float calculaTotalDePagamentos();
    int getIndexFuncionario(string nomeFuncionario);

private:

    vector<Pagamento> pagamentos;

};