#include"Conta.h"
#include"Poupanca.h"
#include"ContaCorrente.h"
#include"ContaEspecial.h"

int main(){
    string nome;
    int num;
    double sal, depositar, saque;

    getline(cin,nome);
    cin >> num;
    cin >> sal;
    cin >> depositar;
    cin >> saque;
    cin.ignore();

    if(1){ 
        ContaCorrente Conta(sal, nome, num, 0.0);
        cout << Conta.getNome() << ", cc: " << Conta.getNumero() <<  ", salário " << Conta.getSalario() << ", ";
        Conta.depositar(depositar);
        Conta.sacar(saque);
        
        cout << "saldo total disponível: R$ " << Conta.total() << endl;
    }

    getline(cin, nome);
    cin >> num;
    cin >> sal;
    cin >> depositar;
    cin >> saque;
    cin.ignore();

    if(1){ 
        ContaEspecial Conta(sal, nome, num);
        cout << Conta.getNome() << ", cc: " << Conta.getNumero() <<  ", salário " << Conta.getSalario() << ", ";

        Conta.depositar(depositar);
        Conta.sacar(saque);
        
        cout << "saldo total disponível: R$ "<< Conta.total()<< endl;
    }

    getline(cin, nome);
    cin >> num;
    cin >> depositar;
    cin >> saque;
    cin.ignore();

    if(1){ 
        Poupanca Conta(51, 0.006, nome, num);
        cout << Conta.getNome() << ", cc: " << Conta.getNumero() << ", ";

        Conta.depositar(depositar);
        Conta.sacar(saque);
        Conta.setSaldo((Conta.getSaldo() + Conta.render()));
        
        cout << "saldo total disponível: R$ " << Conta.getSaldo() << endl;
    }
    return 0;
}