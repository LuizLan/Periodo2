#ifndef DESPESA_H
#define DESPESA_H
#include<string>

using namespace std;

class Despesa{
    
private:
    string nome, tipo;
    float valor;
public:
    Despesa();

    void setNome(string N);
    string getNome();
    void setTipo(string T);
    string getTipo();
    int setValor(float V);
    float getValor();

};

#endif