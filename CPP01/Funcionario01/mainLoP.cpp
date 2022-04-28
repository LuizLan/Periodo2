#include<iostream>
#include<string>

using namespace std;

class Funcionario
{
public:
    Funcionario();
    string nome, sobrenome;
    float salario;

    float getSalarioAnual();

private:

};

Funcionario::Funcionario()
{

}

float Funcionario::getSalarioAnual(){
    return salario*12;
}

int main(){

    Funcionario funcionario[100];
    int i, qntd;
    
    cin >> qntd;

    for (int i = 0; i < qntd; i++){
        cin >> funcionario[i].nome;
        cin >> funcionario[i].sobrenome;
        cin >> funcionario[i].salario;
    }
    
    for (int i = 0; i < qntd; i++){
        cout << funcionario[i].nome << " " << funcionario[i].sobrenome << " - " << funcionario[i].salario << " - " << funcionario[i].getSalarioAnual() << endl;
    }
    

    return 0;
}