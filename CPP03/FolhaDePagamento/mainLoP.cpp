#include<string>
#include<iostream>
#include<vector>
#include<exception>

using namespace std;

class OrcamentoEstouradoException{

public:
    OrcamentoEstouradoException();
    virtual ~OrcamentoEstouradoException();

    string orcamentoEstourado();

protected:

private:

};


OrcamentoEstouradoException::OrcamentoEstouradoException(){

}

OrcamentoEstouradoException::~OrcamentoEstouradoException(){

}

string OrcamentoEstouradoException::orcamentoEstourado(){
    string resposta;
    resposta = "OrcamentoEstouradoException ";
    
    return resposta;
}

class FuncionarioNaoExisteException{

public:
    FuncionarioNaoExisteException();
    virtual ~FuncionarioNaoExisteException();

    string funcionarioNaoExiste(string nome);
    
protected:

private:

};

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){

}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException(){

}

string FuncionarioNaoExisteException::funcionarioNaoExiste(string nome){
    string resposta;
    resposta = "FuncionarioNaoExisteException " + nome;
    
    return resposta;
}

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

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){

}

string Funcionario::getNome(){
    return nome;
}
int Funcionario::getMatricula(){
    return matricula;
}

void Funcionario::setNome(string N){
    nome = N;
}
void Funcionario::setMatricula(int M){
    matricula = M;
}

class Assalariado: public Funcionario{

public:
    Assalariado();
    Assalariado(string nome, int matricula, double salario);
    virtual ~Assalariado();

    double calculaSalario();

protected:

private:
    double salario;
};

Assalariado::Assalariado(){

}
Assalariado::Assalariado(string nome, int matricula, double salario){
    setNome(nome);
    setMatricula(matricula);
    this->salario = salario;
}
Assalariado::~Assalariado(){

}

double Assalariado::calculaSalario(){
    return salario;
}

class Horista: public Funcionario{

public:
    Horista();
    Horista(string nome, int matricula, double salarioHora, double horasTrab);
    virtual ~Horista();

    double calculaSalario();

protected:

private:
    double salarioHora, horasTrab;
};

Horista::Horista(){

}
Horista::Horista(string nome, int matricula, double hora, double htrab){
    setNome(nome);
    setMatricula(matricula);
    salarioHora = hora;
    horasTrab = htrab;
}
Horista::~Horista(){

}

double Horista::calculaSalario(){
    double salario;

    if (horasTrab > 40){
        salario = salarioHora * 40;
        salario += salarioHora * (horasTrab - 40) * 1.5;
    }else{
        salario = salarioHora * horasTrab ;
    }

    return salario*4;
}

class Comissionado: public Funcionario{

public:
    Comissionado();
    Comissionado(string nome, int matricula, double vendasSemana, double porcentualComiss);
    virtual ~Comissionado();

    double calculaSalario();

protected:

private:
    double vendasSemana, percentualComiss;
};

Comissionado::Comissionado(){

}
Comissionado::Comissionado(string nome, int matricula, double vendasSemana, double porcentualComiss){
    setNome(nome);
    setMatricula(matricula);
    this->vendasSemana = vendasSemana;
    this->percentualComiss = porcentualComiss;
}
Comissionado::~Comissionado(){

}

double Comissionado::calculaSalario(){
    return vendasSemana*percentualComiss;
}

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
        throw orcException.orcamentoEstourado() + to_string(getTotalFolha());
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

int main(){
    SistemaGerenciarFolha gerenciador;
    double orcamento;
    string nome, nome2, nome3;
    int matricula;
    double salario, salarioPorHora, horasTrabalhas, vendasMensais, percentualComissao;

    cin >> orcamento;
    cin.ignore();

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
        cout<< gerenciador.calculaValorTotalFolha()<<endl;
    }
    catch(string e){
        std::cerr << e << endl;
    }

    return 0;
}