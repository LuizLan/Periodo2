#include "Quadrado.h"

Quadrado::Quadrado():FiguraGeometrica(1){
    
}
Quadrado::~Quadrado(){

}

void Quadrado::lerAtributosArea(){
    cin >> lado;
}

float Quadrado::calcularArea(){
    return lado*lado;
}
