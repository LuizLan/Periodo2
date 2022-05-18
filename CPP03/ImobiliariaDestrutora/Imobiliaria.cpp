#include "Imobiliaria.h"

Imobiliaria::Imobiliaria(){

}

Imobiliaria::~Imobiliaria(){
    cout << "Deletando Imobiliária" << endl;
    for (int i = 0; i < imob.size(); i++){
        delete imob.at(i);
    }
    /*for(Imovel* i : imob){
        delete i;
    }*/
}

void Imobiliaria::addImovel(Imovel* imovel){
    imob.push_back(imovel);
}

void Imobiliaria::buscaImovel(string busca){
    for (int i = 0; i < imob.size(); i++){
        if (imob[i]->getNome().find(busca) != string::npos ||
            imob[i]->getDisponibilidade().find(busca) != string::npos){
            imob[i]->exibeAtributos();
        }
    }
}

void Imobiliaria::setAtributos(int i){
    imob.at(i)->lerAtributos();
}

void Imobiliaria::getAtributos(int i){
    imob.at(i)->exibeAtributos();
}