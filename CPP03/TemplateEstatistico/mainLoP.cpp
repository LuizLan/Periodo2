#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

class Pedido{

public:
    Pedido();
    Pedido(float valor, int quant);
    virtual ~Pedido();
    float getTotal();
    void toString();
protected:

private:
    float valorUni;
    int qntd;
};

Pedido::Pedido(){

}
Pedido::Pedido(float valor, int quant){
    valorUni = valor;
    qntd = quant;
}
Pedido::~Pedido(){

}

float Pedido::getTotal(){
    return valorUni*qntd;
}

void Pedido::toString(){
    cout <<"R$ " << valorUni << ", quant: " << qntd << ", total: R$ " << getTotal() << endl;
}

class Livro{

public:
    Livro();
    Livro(string titulo, int Paginas);
    virtual ~Livro();
    int getTotal();
    void toString();

protected:

private:
    string titulo;
    int paginas;
};

Livro::Livro(){

}
Livro::Livro(string titulo, int Pags){
    this->titulo = titulo;
    paginas = Pags;
}
Livro::~Livro(){

}
int Livro::getTotal(){
    return paginas;
}

void Livro::toString(){
    cout << titulo + ", páginas: " << paginas << endl;
}

template<class T>

class Estatisticas
{
    public:
        Estatisticas(){};
        virtual ~Estatisticas(){};

        int indexOfMaior(vector<T>vec){
            float maior = vec[0].getTotal();
            int indexM = 0;
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() > maior){
                    maior = vec[i].getTotal();
                    indexM = i;
                }
            }
            return indexM;
        }

        int indexOfmenor(vector<T>vec){
            int indexm = 0;
            float menor = vec[0].getTotal();
            for(int i = 0; i < vec.size(); i++){
                if(vec[i].getTotal() < menor){
                    menor = vec[i].getTotal();
                    indexm = i;
                }
            }
            return indexm;
        }

        float media(vector<T>vec){
            float soma=0;
            for(int i = 0; i < vec.size(); i++){
                soma += vec[i].getTotal();
            }
            return soma/vec.size();
        }

    protected:

    private:
};

int main(){

    vector<Pedido>pedidos01;
    vector<Livro>livros01;

    Estatisticas<Pedido>estPedidos;
    Estatisticas<Livro>estLivros;

    int i, n, qntd;
    float valor;
    string titulo;

    cin >> n;

    for ( i = 0; i < n; i++){
        cin >> valor;
        cin >> qntd;
        pedidos01.push_back(Pedido(valor, qntd));
    }
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, titulo);
        cin >> qntd;
        livros01.push_back(Livro(titulo, qntd));
    }

    i = estPedidos.indexOfMaior(pedidos01);
    cout << "Maior: ";
    pedidos01[i].toString();
    i = estPedidos.indexOfmenor(pedidos01);
    cout << "Menor: ";
    pedidos01[i].toString();
    cout << "Média: " << estPedidos.media(pedidos01)<< endl;

    i = estLivros.indexOfMaior(livros01);
    cout << "Maior: ";
    livros01[i].toString();
    i = estLivros.indexOfmenor(livros01);
    cout << "Menor: ";
    livros01[i].toString();
    cout << "Média: " << estLivros.media(livros01)<< endl;

    return 0;
}