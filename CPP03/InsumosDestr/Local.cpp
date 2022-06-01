#include "Local.h"

Local::Local(){

}

Local::~Local(){

    cout << "Deletando Local" << endl;

    for (int i = 0; i < 3; i++){
        delete insumosArr[i];
    }
    for (int i = 0; i < insumosVec.size(); i++){
        delete insumosVec.at(i);
    }
    
}

void Local::addInsumoArr(Insumos *In, int i){
    insumosArr[i] = In;
}
void Local::addInsumoVec(Insumos *In){
    insumosVec.push_back(In);
}