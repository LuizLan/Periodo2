#include "Epi.h"

Epi::Epi(){

}
Epi::Epi(string tipoInsul, string N, string Ven, string F, int Q, float Val, string T, string D)
:Insumos(tipoInsul, N, Ven, F, Q, Val){
    tipo = T;
    descricao = D;
}
Epi::~Epi(){
    cout << "Deletando EPI" << endl;
}