#include<iostream>
#include<string>
#include "invoice02.h"

using namespace std;

int main(){
    invoice invoice1, invoice2;
    int num, qntd;
    float preco, fatura[10];
    string desc;

    cin >> num;
    cin.ignore();
    invoice1.setNum(num);
    getline(cin, desc);
    invoice1.setDescricao(desc);
    cin >> qntd;
    if(qntd < 0){
        qntd = 0;
    }
    invoice1.setQuantidade(qntd);
    cin.ignore();
    cin >> preco;
    if(preco < 0){
        preco = 0;
    }
    invoice1.setPreco(preco);
    cin.ignore();

    cin >> num;
    cin.ignore();
    invoice2.setNum(num);
    getline(cin, desc);
    invoice2.setDescricao(desc);
    cin >> qntd;
    if(qntd < 0){
        qntd = 0;
    }
    invoice2.setQuantidade(qntd);
    cin.ignore();
    cin >> preco;
    if(preco < 0){
        preco = 0;
    }
    invoice2.setPreco(preco);
    cin.ignore();

    fatura[0] = invoice1.getInvoiceAmount();
    fatura[1] = invoice2.getInvoiceAmount();

    cout << invoice1.getNum() << " - " << invoice1.getDescricao() << " - " << invoice1.getQuantidade() << " - " << invoice1.getPreco() << " - " << fatura[0] << endl;

    cout << invoice2.getNum() << " - " << invoice2.getDescricao() << " - " << invoice2.getQuantidade() << " - " << invoice2.getPreco() << " - " << fatura[0] << endl;

    return 0;
}