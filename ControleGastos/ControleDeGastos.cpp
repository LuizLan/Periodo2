#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{

}

void ControleDeGastos::setDespesa(Despesa d, int i){
    despesa[i] = d;
}

Despesa ControleDeGastos::getDespesa(int i){
    return despesa[i];
}

float ControleDeGastos::calculaTotalDeDespesas(){
    int i = 0;
    float total = 0;

    while(despesa[i].getValor() != 0){
        total = total + despesa[i].getValor();
        i++;
    }

    return total;
}
float ControleDeGastos::calculaTotalDeDespesas(string T){
    int i = 0;
    float total = 0;

    if(existeDespesaDoTipo(T)){
        while(despesa[i].getValor() != 0){
            if(despesa[i].getTipo() == T){
                total = total + despesa[i].getValor();
            }
            i++;
        }
    }else{
        return 0;
    }

    return total;
}
bool ControleDeGastos::existeDespesaDoTipo(string T){
    int i = 0, flag = 0;
    float total = 0;

    while(despesa[i].getValor() != 0){

        if(despesa[i].getTipo() == T){
            return true;
        }
        i++;
    }
    return false;
}
    