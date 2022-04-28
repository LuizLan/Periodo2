#include"Eleitor.h"
#include"GerenciadorEleitores.h"

using namespace std;

int main(){

    GerenciadorEleitores gerente;
    int qntd, i;
    int idade, titulo;
    string nome;

    cin>>qntd;
    cin.ignore();

    for (i = 0; i < qntd; i++)
    {
        getline(cin, nome);
        cin >> idade;
        cin >> titulo;
        cin.ignore();

        gerente.cadastrarEleitor(nome, idade, titulo, i);
        gerente.verificaEleitor(i);
        
    }    
return 1;
}