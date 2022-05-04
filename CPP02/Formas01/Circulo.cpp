#include "Circulo.h"

Circulo::Circulo():FiguraGeometrica(4){

}

Circulo::~Circulo(){

}

void Circulo::lerAtributosArea(){
    cin >> raio;
}
float Circulo::calcularArea(){
    return 3.14*raio*raio;
}
