#include "Funcionario.h"
#include "SistemaGerenciarFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

int main(){
    SistemaGerenciarFolha gerenciador;
    double orcamento;
    string nome, nome2, nome3;
    int matricula;
    double salario, salarioPorHora, horasTrabalhas, vendasMensais, percentualComissao;

    cin >> orcamento;
    cin.ignore();

    gerenciador = SistemaGerenciarFolha(orcamento);

    getline(cin,nome);
    cin>>matricula;
    cin>>salario;
    cin.ignore();
    gerenciador.setFuncionario(new Assalariado(nome, matricula, salario));

    getline(cin,nome);
    cin>>matricula;
    cin>>salarioPorHora;
    cin>>horasTrabalhas;
    cin.ignore();
    gerenciador.setFuncionario(new Horista(nome, matricula, salarioPorHora, horasTrabalhas));

    getline(cin,nome);
    cin>>matricula;
    cin>>vendasMensais;
    cin>>percentualComissao;
    cin.ignore();
    gerenciador.setFuncionario(new Comissionado(nome, matricula, vendasMensais, percentualComissao));

    getline(cin,nome);
    getline(cin,nome2);
    getline(cin,nome3);

    try{
        cout<<gerenciador.consultaSalarioFuncionario(nome)<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }  
    
    try{
        cout<<gerenciador.consultaSalarioFuncionario(nome2)<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }

    try{
        cout<<gerenciador.consultaSalarioFuncionario(nome3)<<endl;
    }
    catch(string e){
        cout<<e<<endl;
    }
    
    try{
        cout<<gerenciador.calculaValorTotalFolha()<<endl;
    }
    catch(string e){
        cout << e << endl;
    }

    return 0;
}