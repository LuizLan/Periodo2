#include "Vacina.h"

Vacina::Vacina(){

}

Vacina::Vacina(string tipo, string N, string Ven, string F,int Q, float Val, string TV, int Dos, int I)
:Insumos(tipo, N, Ven, F, Q, Val){
    tipoV = TV;
    qntdDos = Dos;
    intervalo = I;
}

Vacina::~Vacina(){
    cout << "Deletando Vacina" << endl;
}