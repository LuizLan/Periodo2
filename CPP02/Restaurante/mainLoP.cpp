#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Pedido{

public:
    Pedido();
    Pedido(string descricao, float numero, float qntd, float preco);
    ~Pedido();

    float getTotal();
    float getNumero();
    float getQntd();
    float getPreco();
    string getDescricao();

    void setQntd(float Q);

private:

    string descricao;
    float preco, numero, qntd;

};

Pedido::Pedido(){
    descricao = -1;
    numero = -1;
    qntd = -1;
    preco = -1;

}

Pedido::Pedido(string D, float Num, float Q, float P){
    
    descricao = D;
    numero = Num;
    qntd = Q;
    preco = P;
}

Pedido::~Pedido(){

}

float Pedido::getTotal(){
    float total = preco*qntd;

    return total;
}
float Pedido::getNumero(){
    return numero;
}
float Pedido::getQntd(){
    return qntd;
}
float Pedido::getPreco(){
    return preco;
}
string Pedido::getDescricao(){
    return descricao;
}

void Pedido::setQntd(float Q){
    qntd = Q;
}

class MesaDeRestaurante{

public:
    MesaDeRestaurante();
    ~MesaDeRestaurante();

    void adicionarPedido(Pedido P);

    void zeraPedidos();

    float calculaTotal();

    void exibeConta();

    int getUso();

private:
    vector<Pedido> pedidos;
    int uso;
};

MesaDeRestaurante::MesaDeRestaurante(){
    uso = -1;
}

MesaDeRestaurante::~MesaDeRestaurante(){

}

int MesaDeRestaurante::getUso(){
    return uso;
}

void MesaDeRestaurante::adicionarPedido(Pedido P){

    int i, repetido = 0;
    uso = 1;

    for ( i = 0; i < pedidos.size(); i++){
        if(P.getNumero() == pedidos.at(i).getNumero()){
            float qntd = 0;
            
            qntd = pedidos.at(i).getQntd() + P.getQntd();
            pedidos.at(i).setQntd(qntd);

            repetido = 1;
            break;
        }
    }

    if(repetido == 0){
        pedidos.push_back(P);
    }
}

void MesaDeRestaurante::zeraPedidos(){
    int i;

    for ( i = 0; i < pedidos.size(); i++){
        pedidos.at(i).setQntd(0);    
    }
}

float MesaDeRestaurante::calculaTotal(){
    int i;
    float total;

    total = 0;
    
    for ( i = 0; i < pedidos.size(); i++){
        total += pedidos.at(i).getTotal();
    }

    return total;
}

void MesaDeRestaurante::exibeConta(){
    int i;

    for ( i = 0; i < pedidos.size(); i++){
        cout << pedidos.at(i).getNumero() << " - " << pedidos.at(i).getDescricao() << " - " << pedidos.at(i).getQntd() << " - " << pedidos.at(i).getPreco() <<" - R$ " << pedidos.at(i).getQntd()*pedidos.at(i).getPreco() << endl;
    }

    cout << "Total: R$ " <<  calculaTotal() << endl;
}

class Restaurante{

public:
    Restaurante();
    ~Restaurante();

    void adicionarPedido(Pedido Pedido, int Mesa);
    float calculaTotalRestaurante();
    MesaDeRestaurante getMesa(int Mesa);

private:
    MesaDeRestaurante mesas[30];
};

Restaurante::Restaurante(){

}

Restaurante::~Restaurante(){

}

void Restaurante::adicionarPedido(Pedido Pedido, int Mesa){
    
    mesas[Mesa].adicionarPedido(Pedido);

}

float Restaurante::calculaTotalRestaurante(){
    int i;
    float total = 0;
    
    for ( i = 0; i < 30; i++){
        if (mesas[i].getUso() == 1){
            total += mesas[i].calculaTotal();
        }
    }
    
    return total;
}

MesaDeRestaurante Restaurante::getMesa(int Mesa){
    return mesas[Mesa];
}

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