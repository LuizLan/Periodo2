#include<iostream>
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

Funcionario::Funcionario()
{

}   

Funcionario::Funcionario(string N, string S, float Sal){
    nome = N;
    sobrenome = S;
    salario = Sal;
}   

void Funcionario::setNome(string N){
    nome = N;
}
string Funcionario::getNome(){
    return nome;
}
void Funcionario::setSobrenome(string S){
    sobrenome = S;
}
string Funcionario::getSobremome(){
    return sobrenome;
}
void Funcionario::setSalario(float S){
    salario = S;
}
float Funcionario::getSalario(){
    return salario;
}

float Funcionario::getSalarioAnual(){
    return salario*12;
}

void Funcionario::aumentaSalario(float porc){
    salario = salario + salario*porc;
}

int main(){

    Funcionario funcionario[100];
    string nome, sobrenome;
    int i, qntd;
    float salario;
    
    cin >> qntd;

    for (int i = 0; i < qntd; i++){
        cin >> nome;
        cin >> sobrenome;
        cin >> salario;
        funcionario[i] = Funcionario(nome, sobrenome, salario);
    }
    

    for (int i = 0; i < qntd; i++){
        cout << funcionario[i].getNome() << " " << funcionario[i].getSobremome() << " - " << funcionario[i].getSalario() << " - " << funcionario[i].getSalarioAnual() << endl;
        funcionario[i].aumentaSalario(0.1);
        cout << funcionario[i].getSalarioAnual() << endl;
    }
    

    return 0;
}