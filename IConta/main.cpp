#include"IConta.h"
#include"Conta.h"
#include"ContaEspecial.h"

using namespace std;

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