#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(){

}
FiguraGeometrica::FiguraGeometrica(int T){
    if (T==0){
        nome = "Indefinido";
        tipo = 0;
    }
    else if (T==1){
        nome = "Quadrado";
        tipo = 1;
    }
    else if (T==2){
        nome = "Retângulo";
        tipo = 2;
    }else if (T==3){
        nome = "Triângulo";
        tipo = 3;
    }else if(T==4){
        nome = "Círculo";
        tipo = 4;
    }
}
FiguraGeometrica::~FiguraGeometrica(){

}
string FiguraGeometrica::getNome(){
    return nome;
}