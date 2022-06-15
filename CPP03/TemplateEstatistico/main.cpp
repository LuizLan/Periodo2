#include"Pedido.h"
#include"Livro.h"
#include"Estatisticas.h"

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