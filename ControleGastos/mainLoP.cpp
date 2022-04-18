#include<iostream>
#include<string>

using namespace std;

using namespace std;

class Despesa{
    
private:
    string nome, tipo;
    float valor;
public:
    Despesa();

    void setNome(string N);
    string getNome();
    void setTipo(string T);
    string getTipo();
    int setValor(float V);
    float getValor();

};

Despesa::Despesa(){
    valor = 0;

}
void Despesa::setNome(string N){
    nome = N;
}
string Despesa::getNome(){
    return nome;
}
void Despesa::setTipo(string T){
    tipo = T;
}
string Despesa::getTipo(){
    return tipo;
}
int Despesa::setValor(float V){
    valor = V;
}
float Despesa::getValor(){
    return valor;
}

class ControleDeGastos: public Despesa{

private:
    Despesa despesa[101];
public:
    ControleDeGastos();

    void setDespesa(Despesa d, int i);
    Despesa getDespesa(int i);
    float calculaTotalDeDespesas();
    float calculaTotalDeDespesas(string T);
    bool existeDespesaDoTipo(string T);
    
};

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