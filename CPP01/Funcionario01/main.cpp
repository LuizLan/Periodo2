#include<iostream>
#include<string>
#include "Funcionario.h"

using namespace std;

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