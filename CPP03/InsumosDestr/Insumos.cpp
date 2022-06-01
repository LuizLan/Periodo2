#include "Insumos.h"

Insumos::Insumos(){

}

Insumos::Insumos(string T,string N, string Ven, string F, int Q, float Val){
    tipoInsu = T;
    nome = N;
    vencimento = Ven;
    fabricante = F;
    qntd = Q;
    valor = Val;
}

Insumos::~Insumos(){
    cout << "Deletando Insumos" << endl;
}