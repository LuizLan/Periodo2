#include<iostream>
#include<vector>
#include"Trabalhador.h"
#include"TrabalhadorAssalariado.h"
#include"TrabalhadorPorHora.h"

using namespace std;

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