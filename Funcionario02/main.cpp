#include<iostream>
#include<string>
#include "Funcionario.h"

using namespace std;

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