#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Trabalhador{

public:
    Trabalhador();
    ~Trabalhador();

    string getNome();
    float getSalario();
    void setNome(string nome);
    void setSalario(float salario);
    virtual float calcularPagamentoSemanal();
    virtual float calcularPagamentoSemanal(int H);

protected:

    string nome;
    float salario;

private:

};

Trabalhador::Trabalhador(){
    salario = 0;
}

Trabalhador::~Trabalhador(){

}

string Trabalhador::getNome(){
    return nome;
}

void Trabalhador::setNome(string N){
    nome = N;
}

float Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setSalario(float S){
    salario = S;
}

float Trabalhador::calcularPagamentoSemanal(){}

float Trabalhador::calcularPagamentoSemanal(int H){}

class TrabalhadorAssalariado : public Trabalhador{

public:
    TrabalhadorAssalariado();
    TrabalhadorAssalariado(float salario);
    ~TrabalhadorAssalariado();

    float calcularPagamentoSemanal();

private:

};

TrabalhadorAssalariado::TrabalhadorAssalariado(){

}

TrabalhadorAssalariado::TrabalhadorAssalariado(float S){
    salario = S;
}

TrabalhadorAssalariado::~TrabalhadorAssalariado(){

}

float TrabalhadorAssalariado::calcularPagamentoSemanal(){
    return salario/4;
}

class TrabalhadorPorHora:public Trabalhador{

public:

    TrabalhadorPorHora();
    TrabalhadorPorHora(float valorDaHora);
    ~TrabalhadorPorHora();

    float calcularPagamentoSemanal(int horas);

private:

    float valorDaHora;

};

TrabalhadorPorHora::TrabalhadorPorHora(){

}

TrabalhadorPorHora::TrabalhadorPorHora(float VDH){
    valorDaHora = VDH;
}

TrabalhadorPorHora::~TrabalhadorPorHora(){

}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){
    float semanal;

    if(horas <= 40){
        semanal = valorDaHora*horas;
    }else{
        semanal = (valorDaHora*40) + ((valorDaHora*1.5)*(horas-40));
    }

    salario = semanal*4;
    
    return semanal;
}

int main(){
    int i, count, tipo;

    vector<Trabalhador*> trabalhador;
    float salarioMes, salarioHora;
    int horaSemanal;
    string nome;

    cin >> count;

    for ( i = 0; i < count; i++){
        
        cin >> tipo;
        cin.ignore();

        if (tipo==1){
            
            getline(cin, nome);
            cin >> salarioMes;
            cin.ignore();

            auto *vet= new TrabalhadorAssalariado(salarioMes);
            trabalhador.push_back(vet);
            trabalhador.at(i)->setNome(nome);

            cout << trabalhador.at(i)->getNome() << " - Semanal: R$ " << trabalhador.at(i)->calcularPagamentoSemanal() << " - Mensal: R$ " << trabalhador.at(i)->getSalario() << endl; 
        
        }else{

            getline(cin, nome);
            cin >> salarioHora;
            cin >> horaSemanal;
            cin.ignore();

            auto *vet= new TrabalhadorPorHora(salarioHora);
            trabalhador.push_back(vet);
            trabalhador.at(i)->setNome(nome);

            cout << trabalhador.at(i)->getNome() << " - " << "Semanal: R$ " << trabalhador.at(i)->calcularPagamentoSemanal(horaSemanal) << " - Mensal: R$ "<< trabalhador.at(i)->calcularPagamentoSemanal(horaSemanal)*4 << endl;
        }
    }

    return 1;
}