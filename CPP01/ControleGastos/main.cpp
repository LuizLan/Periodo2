#include<iostream>
#include<string>
#include"Despesa.h"
#include"ControleDeGastos.h"

using namespace std;

int main(){
    int i, qntd;
    Despesa despesa;
    ControleDeGastos controlador;
    string nome, tipo;
    float valor;

    cin >> qntd;
    cin.ignore();

    for (i = 0; i < qntd; i++){
        getline(cin, nome);
        despesa.setNome(nome);
        cin >> valor;
        despesa.setValor(valor);
        cin.ignore();
        getline(cin, tipo);
        despesa.setTipo(tipo);

        controlador.setDespesa(despesa, i);
    }
    
    getline(cin, tipo);

    if(controlador.existeDespesaDoTipo(tipo)){
        for (i = 0; i < qntd; i++){
            despesa = controlador.getDespesa(i);
            if(despesa.getTipo() == tipo){
                cout << despesa.getNome() << ", R$ " << despesa.getValor() << endl;
            }
        }
    }else{
        cout << "Nenhuma despesa do tipo especificado" << endl;
    }

    cout << "Total: " << controlador.calculaTotalDeDespesas(tipo) << "/" << controlador.calculaTotalDeDespesas() << endl;

    return 0;
}