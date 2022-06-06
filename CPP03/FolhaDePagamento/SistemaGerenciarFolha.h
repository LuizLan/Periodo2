#include"Funcionario.h"
#include"FuncionarioNaoExisteException.h"
#include"OrcamentoEstouradoException.h"

#pragma once

class SistemaGerenciarFolha{

public:
    SistemaGerenciarFolha();
    SistemaGerenciarFolha(double orcamentoMax);
    virtual ~SistemaGerenciarFolha();

    void setFuncionario(Funcionario *funcionario);
    double getTotalFolha();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(string nome);

protected:

private:
    vector<Funcionario*> funcionarios;
    double orcamento;
};