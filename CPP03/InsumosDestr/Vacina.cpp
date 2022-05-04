#include "Vacina.h"

Vacina::Vacina(){

}

Vacina::Vacina(string N, string Ven, string F,float Q, float Val, string TV, int Dos, int I)
:Insumos( N, Ven, F, Q, Val){
    tipoV = TV;
    qntdDos = Dos;
    intervalo = I;
}

Vacina::~Vacina(){

}