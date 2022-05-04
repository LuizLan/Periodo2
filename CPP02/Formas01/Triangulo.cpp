#include "Triangulo.h"

Triangulo::Triangulo():FiguraGeometrica(3){

}

Triangulo::~Triangulo(){

}

void Triangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}
float Triangulo::calcularArea(){
    return (base*altura)/2;
}