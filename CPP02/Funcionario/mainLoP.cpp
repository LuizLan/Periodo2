#include<iostream>
#include <string>

using namespace std;

class Funcionario
{

private:

protected:

    int matricula;
    float salario;
    string nome;

public:
    Funcionario();

    void setMatricula(int M);
    int getMatricula();
    void setSalario(float S);
    virtual float getSalario();
    void setNome(string N);
    string getNome();

};

Funcionario::Funcionario()
{

}

void Funcionario::setMatricula(int M){
    matricula = M;
}
int Funcionario::getMatricula(){
    return matricula;
}
void Funcionario::setSalario(float S){
    salario = S;
}
float Funcionario::getSalario(){
    return salario;
}
void Funcionario::setNome(string N){
    nome = N;
}
string Funcionario::getNome(){
    return nome;
}

class Consultor:public Funcionario{

private:

public:
    Consultor();
    
    float getSalario();
    float getSalario(float P);

};

Consultor::Consultor()
{

}

float Consultor::getSalario(){
    return salario*1.1;
}

float Consultor::getSalario(float S){

    float porc;

    porc = 1+S;

    return salario*porc;
}

int main(){

    Funcionario funcionario, *consultor = new Consultor();
    int matricula;
    float salario, porc;
    string nome;

    cin >> matricula; 
    funcionario.setMatricula(matricula);
    cin.ignore();
    getline(cin, nome);
    funcionario.setNome(nome);
    cin >> salario;
    funcionario.setSalario(salario);

    cin >> matricula; 
    consultor->setMatricula(matricula);
    cin.ignore();
    getline(cin, nome);
    consultor->setNome(nome);
    cin >> salario;
    consultor->setSalario(salario);

    cout << funcionario.getMatricula() << " - " << funcionario.getNome() << " - R$ " << funcionario.getSalario() << endl;
    cout << consultor->getMatricula() << " - " << consultor->getNome() << " - R$ " << consultor->getSalario() << endl;

    return 1;
}