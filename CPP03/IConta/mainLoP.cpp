#include<vector>
#include<string>
#include<iostream>

using namespace std;

class IConta
{
public:
    IConta();
    ~IConta();

    virtual void sacar(double V) = 0;
    virtual void depositar(double V) = 0;
    virtual double saldoTotalDisponivel() = 0;

private:

};

IConta::IConta()
{

}

IConta::~IConta()
{

}

class Conta : public IConta {

public:
    Conta();
    Conta(string nomeCliente, float numeroConta, float salarioMes);
    ~Conta();

    virtual void definirLimite();
    void sacar(double V);
    void depositar(double V);
    double saldoTotalDisponivel();

    string getNome();
    float getNumero();
    float getSalario();

protected:
    string nomeCliente;
    double numeroConta, salarioMes, saldo, limite;

private:

};

Conta::Conta()
{

}

Conta::Conta(string nome, float numero, float salario){

    nomeCliente = nome;
    numeroConta = numero;
    salarioMes = salario;

    saldo = 0;
}

Conta::~Conta()
{

}

void Conta::definirLimite(){
    limite = 2*salarioMes;
}

void Conta::sacar(double V){
    
    if(V > saldoTotalDisponivel()){

        saldo = saldo;
        cout << "saldo indisponivel";   

    }else{

        saldo = saldo - V;

    }

}

void Conta::depositar(double V){
    saldo = saldo + V;
}

double Conta::saldoTotalDisponivel(){

    definirLimite();

    return (saldo + limite);
}

string Conta::getNome(){
    return nomeCliente;
}

float Conta::getNumero(){
    return numeroConta;
}

float Conta::getSalario(){
    return salarioMes;
}

class ContaEspecial : public Conta
{
public:
    ContaEspecial();
    ContaEspecial(string nomeCliente, float numeroConta, float salarioMes);
    ~ContaEspecial();

    void definirLimite();

private:

};

ContaEspecial::ContaEspecial()
{

}

ContaEspecial::ContaEspecial(string nome, float numero, float salario){
    
    nomeCliente = nome;
    numeroConta = numero;
    salarioMes = salario;

    saldo = 0;
}

ContaEspecial::~ContaEspecial()
{

}

void ContaEspecial::definirLimite(){
    limite = 3*salarioMes;
}

int main(){

    vector<Conta*> contas;
    string nome;
    double numero, salario, depositar, sacar;
    int i;

    for (i = 0; i < 2; i++){
        getline(cin, nome);
        cin >> numero;
        cin >> salario;
        cin >> depositar;
        cin >> sacar;
        cin.ignore();

        if (i == 0)
        {
            auto *vet = new Conta(nome, numero, salario);
            contas.push_back(vet);
        }
        else
        {
            auto *vet = new ContaEspecial(nome, numero, salario);
            contas.push_back(vet);
        }

        contas.at(i)->depositar(depositar);
        contas.at(i)->sacar(sacar);
        
        cout << contas.at(i)->getNome() << ", cc: " << contas.at(i)->getNumero() << ", salário " << contas.at(i)->getSalario() 
        << ", saldo total disponível: R$ " << contas.at(i)->saldoTotalDisponivel() << endl;

    }

    return 1;
}