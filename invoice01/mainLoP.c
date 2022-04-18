#include<iostream>
#include<string>
#include "invoice.h"

class invoice{

    public:

        int num, quantidade;
        float preco;
        string descricao;

        float getInvoiceAmount();

        invoice();

    private:

};

invoice::invoice(){

}

float invoice::getInvoiceAmount(){

    return preco * quantidade;
}


using namespace std;

int main(){
    invoice invoice1, invoice2;
    float fatura[10];

    //cout <<"Digite a data\n";

    cin >> invoice1.num;
    cin >> invoice1.descricao;
    cin >> invoice1.quantidade;
    if(invoice1.quantidade < 0){
        invoice1.quantidade = 0;
    }
    cin >> invoice1.preco;
    if(invoice1.preco < 0){
        invoice1.preco = 0;
    }

    cin >> invoice2.num;
    cin >> invoice2.descricao;
    cin >> invoice2.quantidade;
    if(invoice2.quantidade < 0){
        invoice2.quantidade = 0;
    }
    cin >> invoice2.preco;
    if(invoice2.preco < 0){
        invoice2.preco = 0;
    }

    fatura[0] = invoice1.getInvoiceAmount();
    fatura[1] = invoice2.getInvoiceAmount();

    cout << invoice1.num << "-" << invoice1.descricao << "-" << invoice1.quantidade << "-" << invoice1.preco << "-" << fatura[0] << endl;
    
    cout << invoice2.num << "-" << invoice2.descricao << "-" << invoice2.quantidade << "-" << invoice2.preco << "-" << fatura[1] << endl;

    return 0;
}