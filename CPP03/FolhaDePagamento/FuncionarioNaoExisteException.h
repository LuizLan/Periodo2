#include<string>

using namespace std;

#pragma once

class FuncionarioNaoExisteException{

public:
    FuncionarioNaoExisteException();
    virtual ~FuncionarioNaoExisteException();

    string funcionarioNaoExiste(string nome);
    
protected:

private:

};