#include "Medicamento.h"

Medicamento::Medicamento(){

}

Medicamento::Medicamento(string tipo, string N, string Ven, string F, int Q, float Val, string Dos, string Adm, int Dis)
:Insumos(tipo, N, Ven, F, Q, Val){
   dosagem = Dos;
   administracao = Adm;
   disponibilidade = Dis;
}

Medicamento::~Medicamento(){
   cout << "Deletando Medicamento" << endl;
}