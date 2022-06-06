#include "SistemaGerenciarFolha.h"

SistemaGerenciarFolha::SistemaGerenciarFolha(){

}
SistemaGerenciarFolha::SistemaGerenciarFolha(double orcamentoMax){
    orcamento = orcamentoMax;
}
SistemaGerenciarFolha::~SistemaGerenciarFolha(){

}

void SistemaGerenciarFolha::setFuncionario(Funcionario *funcionario){
    funcionarios.push_back(funcionario);
}

double SistemaGerenciarFolha::getTotalFolha(){
    double totalFolha = 0;
    for (int i = 0; i < funcionarios.size(); i++){
        totalFolha += funcionarios.at(i)->calculaSalario();
    }
    return totalFolha;
}

double SistemaGerenciarFolha::calculaValorTotalFolha(){
    OrcamentoEstouradoException orcException;
    double totalFolha = 0;

    for (int i = 0; i < funcionarios.size(); i++){
        totalFolha += funcionarios.at(i)->calculaSalario();
    }
    if (orcamento > totalFolha){
        return totalFolha;
    }else{
        throw orcException.orcamentoEstourado() + to_string((int)getTotalFolha());
    }
    return 0;
}

double SistemaGerenciarFolha::consultaSalarioFuncionario(string nome){
    FuncionarioNaoExisteException funcException;

    for (int i = 0; i < funcionarios.size(); i++){
        if(funcionarios.at(i)->getNome() == nome){
            return funcionarios.at(i)->calculaSalario();
        }
    }
    throw funcException.funcionarioNaoExiste(nome);
    return 0;
}