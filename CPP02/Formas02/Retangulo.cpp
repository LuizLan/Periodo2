#include "Retangulo.h"

Retangulo::Retangulo():FiguraGeometrica(2){

}

Retangulo::~Retangulo(){

}

void Retangulo::lerAtributosArea(){
    cin >> altura;
    cin >> largura;
}
float Retangulo::calcularArea(){
    return altura*largura;
}