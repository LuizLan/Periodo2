#include "Insumos.h"

Insumos::Insumos(){

}

Insumos::Insumos(string N, string Ven, string F, float Q, float Val){
    nome = N;
    vencimento = Ven;
    fabricante = F;
    qntd = Q;
    valor = Val;
}

Insumos::~Insumos(){

}