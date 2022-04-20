#include "GerenciadorEleitores.h"

GerenciadorEleitores::GerenciadorEleitores()
{

}

GerenciadorEleitores::~GerenciadorEleitores()
{

}

void GerenciadorEleitores::cadastrarEleitor(string N, int I, int T, int P){
    eleitores[P] = Eleitor(N, I, T);
}


void GerenciadorEleitores::verificaMenoridade(int P){
    
    string mensagem = ("Eleitor" + eleitores[P].getNome() + " não pode ser cadastrado");
    
    if (eleitores[P].getIdade() < 16){
        throw underflow_error(mensagem);
    }
}

void GerenciadorEleitores::verificaPendenciaIdade(int P){
    
    string mensagem = ("Eleitor" + eleitores[P].getNome() + " com pendência");
    
    if (eleitores[P].getIdade() > 20){
        throw overflow_error(mensagem);
    }
}

void GerenciadorEleitores::verificaEleitor(int P){
    
    try
    {
        verificaMenoridade(P);
        verificaPendenciaIdade(P);
    }
    catch(const underflow_error e){
        cout << e.what() << endl;
    }
    catch(const overflow_error e){
        cout << e.what() << endl;
    }
}