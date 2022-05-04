#include "Medicamento.h"

Medicamento::Medicamento(){

}

Medicamento::Medicamento(string N, string Ven, string F, float Q, float Val, string Dos, string Adm, string Dis)
:Insumos( N, Ven, F, Q, Val){
   dosagem = Dos;
   administracao = Adm;
   disponibilizacao = Dis;
}

Medicamento::~Medicamento(){

}