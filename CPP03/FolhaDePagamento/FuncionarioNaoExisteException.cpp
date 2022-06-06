#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){

}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException(){

}

string FuncionarioNaoExisteException::funcionarioNaoExiste(string nome){
    string resposta;
    resposta = "FuncionarioNaoExisteException " + nome;
    
    return resposta;
}