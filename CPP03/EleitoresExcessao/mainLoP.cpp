#include<iostream>
#include<string>
#include<exception>
#include<stdexcept>

using namespace std;

class Eleitor
{
public:

    Eleitor();
    Eleitor(string N, int I, int T);
    ~Eleitor();

    string getNome();
    int getIdade();
    int getTitulo();

private:

    string nome;
    int idade, titulo;

};

Eleitor::Eleitor(){

}

Eleitor::~Eleitor()
{

}

Eleitor::Eleitor(string N, int I, int T){

    nome = N;
    idade = I;
    titulo = T;

}

string Eleitor::getNome(){
    return nome;
}
int Eleitor::getIdade(){
    return idade;
}
int Eleitor::getTitulo(){
    return titulo;
}

class GerenciadorEleitores: public Eleitor
{
public:
    GerenciadorEleitores();
    ~GerenciadorEleitores();

    void cadastrarEleitor(string N, int I, int T, int P);
    void verificaEleitor(int P);

private:

    Eleitor eleitores[100];

    void verificaMenoridade(int P);
    void verificaPendenciaIdade(int P);

};

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
    
    string mensagem = ("Eleitor " + eleitores[P].getNome() + " não pode ser cadastrado");
    
    if (eleitores[P].getIdade() < 16){
        throw underflow_error(mensagem);
    }
}

void GerenciadorEleitores::verificaPendenciaIdade(int P){
    
    string mensagem = ("Eleitor " + eleitores[P].getNome() + " com pendência");
    
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

int main(){

    GerenciadorEleitores gerente;
    int qntd, i;
    int idade, titulo;
    string nome;

    cin>>qntd;
    cin.ignore();

    for (i = 0; i < qntd; i++)
    {
        getline(cin, nome);
        cin >> idade;
        cin >> titulo;
        cin.ignore();

        gerente.cadastrarEleitor(nome, idade, titulo, i);
        gerente.verificaEleitor(i);
        
    }    
return 1;
}