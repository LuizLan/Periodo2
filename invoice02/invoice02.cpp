#include<iostream>
#include<string>
#include "invoice02.h"

using namespace std;

invoice::invoice(){
}

void invoice::setNum(int x){
    num = x;
}

void invoice::setQuantidade(int x){
    quantidade = x;
}

void invoice::setPreco(float x){
    preco = x;
}
void invoice::setDescricao(string x){
    descricao = x;
}

int invoice::getNum(){
    return num;
}

int invoice::getQuantidade(){
    return quantidade;
}

float invoice::getPreco(){
    return preco;
}

string invoice::getDescricao(){
    return descricao;
}

float invoice::getInvoiceAmount(){

    return preco * quantidade;
}