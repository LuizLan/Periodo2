#include <iostream>
#include <vector>
#include <string>
#include <exception>
#include <stdexcept>

class Eleitor
{
private:
    std::string nome;
    int idade;
    std::string titulo;
public:
    Eleitor(/* args */);
    Eleitor(std::string nome, int idade, std::string titulo);
    std::string getNome();
    int getIdade();
    std::string getTitulo();
    ~Eleitor();
};

class GerenciaEleitores
{
private:
    void verificaMenorIdade(int n);
    void verificaPendenciaIdade(int n);
public:
    GerenciaEleitores(/* args */);
    void cadastrarEleitor(std::string nome, int idade, std::string titulo);
    void verificaEleitor();
    ~GerenciaEleitores();
protected:
    std::vector<Eleitor*> eleitor;
};

Eleitor::Eleitor(/* args */)
{
}

Eleitor::Eleitor(std::string nome, int idade, std::string titulo)
{
    this->nome = nome;
    this->idade = idade;
    this->titulo = titulo;
}

std::string Eleitor::getNome()
{
    return nome;
}

int Eleitor::getIdade()
{
    return idade;
}

std::string Eleitor::getTitulo()
{
   return titulo; 
}  

Eleitor::~Eleitor()
{
}

GerenciaEleitores::GerenciaEleitores(/* args */)
{
}

void GerenciaEleitores::verificaMenorIdade(int n)
{
    std::string mensagem = ("Eleitor " + eleitor[n]->getNome() + " não pode ser cadastrado");
    if(eleitor[n]->getIdade() < 16){
        throw std::underflow_error(mensagem);
    }
}

void GerenciaEleitores::verificaPendenciaIdade(int n)
{
    std::string mensagem = ("Eleitor " + eleitor[n]->getNome() + " com pendência");
    if(eleitor[n]->getIdade() > 20){
        throw std::overflow_error(mensagem);
    }
}

void GerenciaEleitores::cadastrarEleitor(std::string nome, int idade, std::string titulo)
{
    auto *vet = new Eleitor(nome, idade, titulo);
    eleitor.push_back(vet);
}

void GerenciaEleitores::verificaEleitor()
{   
    for(int i = 0; i < eleitor.size(); i++)
    {
        try
        {
            verificaMenorIdade(i);
            verificaPendenciaIdade(i);
        }
        catch(const std::underflow_error e)
        {
            std::cout << e.what() << '\n';
        }
        catch(const std::overflow_error e)
        {
            std::cout << e.what() << '\n';
        }
    }
}

GerenciaEleitores::~GerenciaEleitores()
{
}

using namespace std;

int main(void)
{
    GerenciaEleitores gerente;
    int n;
    cin>>n;
    getchar();
    string nome, titulo;
    int idade;

    for(int i = 0; i < n; i++)
    {
        getline(cin, nome);
        cin>>idade;
        getchar();
        cin>>titulo;
        getchar();
        gerente.cadastrarEleitor(nome, idade, titulo);
    }

    gerente.verificaEleitor();

}