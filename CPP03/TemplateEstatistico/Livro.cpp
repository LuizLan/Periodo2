#include "Livro.h"

Livro::Livro(){

}
Livro::Livro(string titulo, int Pags){
    this->titulo = titulo;
    paginas = Pags;
}
Livro::~Livro(){

}
int Livro::getTotal(){
    return paginas;
}

void Livro::toString(){
    cout << titulo + ", páginas: " << paginas << endl;
}