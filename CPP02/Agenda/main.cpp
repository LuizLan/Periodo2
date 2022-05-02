#include<iostream>
#include<vector>
#include"Endereco.h"
#include"Pessoa.h"

using namespace std;

int main(){

    int i, count;
    vector<Pessoa> agenda;
    string rua, bairro, cidade, estado, CEP, nome, telefone;
    float numero;
    
    cin >> count;
    cin.ignore();

    for ( i = 0; i < count; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        cin.ignore();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, CEP);

        Endereco ender = Endereco(rua, bairro, cidade, estado, CEP, numero);
        agenda.push_back(Pessoa(nome, ender, telefone));
    }
    
    for ( Pessoa contato : agenda){
        cout << contato.toString() << endl << endl;
    }

    return 1;
}