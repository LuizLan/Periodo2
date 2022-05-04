#include"Pedido.h"
#include"MesaDeRestaurante.h"
#include"Restaurante.h"

using namespace std;

int main(){
    int i, qntd;
    int numero, mesa;
    string descricao;
    float valor;

    Restaurante WCdonals;

    while (1){
        cin >> numero;
        if(numero < 0){
            break;
        }
        cin.ignore();
        getline(cin, descricao);
        cin >> qntd;
        cin >> valor;
        cin >> mesa;

        auto vet= Pedido(descricao, numero, qntd, valor);
        WCdonals.adicionarPedido(vet, mesa);
    }
    
    for (i = 0; i < 30; i++){
        if (WCdonals.getMesa(i).getUso() == 1){
            cout << "Mesa " << i << endl;
            WCdonals.getMesa(i).exibeConta();
            cout << endl;
        }
    }

    cout << "Total Restaurante: R$ "<< WCdonals.calculaTotalRestaurante() << endl;

    return 1;
}