#include <iostream>
#include <string>

using namespace std;

class Conta{
    protected:
        string nome;
        int numero;
        double saldo;

    public: 
        Conta(string = "Undefined", int = 0, double = 0.0);

        void setNome(string nome) { this->nome = nome; };
        void setNumero(int num) { this->numero = num; };
        void setSaldo(double salario) { this->saldo = salario; };
        string getNome() { return this->nome; };
        int getNumero() { return this->numero; };
        double getSaldo() { return this->saldo; };

        void sacar(double);
        void depositar(double);
};

Conta::Conta(string nome, int numero, double saldo){
    this->nome = nome;
    this->numero = numero;
    this->saldo = saldo;
}
void Conta::depositar(double depo){
    saldo += depo;
}
void Conta::sacar(double saque){
    if(saque > saldo){
        cout << endl << "saldo insuficiente" << endl;
    }
    else{
        saldo -= saque;
    }
}

class Poupanca : public Conta{
    private:
        int variacao;
        double taxaRend;

    public: 
        Poupanca(int = 0.0, double = 0.006, string = "Undefined", int = 0, double = 0.0);

        void setVariacao(int var) { this->variacao = var; };
        void settaxaRend(double taxa) { this->taxaRend = taxa; };
        int getvariacao() { return this->variacao; }
        double gettaxaRend() { return this->taxaRend; }

        double render();
};

Poupanca::Poupanca(int var, double taxa, string nome, int num, double saldo) 
: Conta(nome, num, saldo){
    variacao = var;
    taxaRend = taxa;
}

double Poupanca::render(){
    if(variacao == 51){
        return (saldo * taxaRend);
    }
    else{
        return (saldo * (taxaRend + 0.005));
    }
}

class ContaCorrente : public Conta{
    protected:
        double salario;
        double limite;

    public:
        ContaCorrente(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setSalario(double sal) { this->salario = sal; };
        void setLimite(double lim) { this->limite = lim; };
        double getSalario() { return this->salario; };
        double getLimite() { return this->limite; };

        double total();
        void setLimite();
};

ContaCorrente::ContaCorrente(double sal, string nome, int num, double saldo)
: Conta(nome, num, saldo){
    this->salario = sal;
    setLimite();
}
void ContaCorrente::setLimite(){
    limite = salario * 2;
}
double ContaCorrente::total(){
    return (saldo + limite);
};

class ContaEspecial : public ContaCorrente{
    public:
        ContaEspecial(double = 0.0, string = "Undefined", int = 0, double = 0.0);

        void setLimite();
};

ContaEspecial::ContaEspecial(double sal, string nome, int num, double saldo)
:ContaCorrente(sal, nome, num, saldo){
    setLimite();
}
void ContaEspecial::setLimite(){
    limite = salario * 4;
}

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