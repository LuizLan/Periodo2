#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Imovel{

public:
    Imovel();
    virtual ~Imovel();
    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

    string getNome();
    string getDisponibilidade();

protected:
    string nome, disponibilidade;
    int tipo = -1;
    float valor;

private:
};

Imovel::Imovel(){

}

Imovel::~Imovel(){
    cout << "Deletando Imovel" << endl;
}

string Imovel::getNome(){
    return nome;
}
string Imovel::getDisponibilidade(){
    return disponibilidade;
}

class Apartamento:public Imovel
{
public:
    Apartamento();
    ~Apartamento();
    void exibeAtributos();
    void lerAtributos();

private:

    int quartos, andar, garagem;
    float area, condo;

};

Apartamento::Apartamento()
{
    nome = "Apartamento";
}
Apartamento::~Apartamento()
{
    cout << "Deletando Apartamento" << endl;
}

void Apartamento::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> area;
    cin >> quartos;
    cin >> andar;
    cin >> condo;
    cin >> garagem;
}

void Apartamento::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área, " << quartos << " quartos " << andar  << " andar(es), " << condo << " de condomínio, " << garagem << " vaga(s) de garagem. R$ " << valor << "." << endl;

}

class Casa:public Imovel
{
public:
    Casa();
    ~Casa();
    void exibeAtributos();
    void lerAtributos();

private:

    int pavimentos, quartos;
    float areaTerr, areaConst;

};

Casa::Casa()
{
    nome = "Casa";

}
Casa::~Casa()
{
    cout << "Deletando Casa" << endl;

}

void Casa::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> pavimentos;
    cin >> quartos;
    cin >> areaTerr;
    cin >> areaConst;
}

void Casa::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << pavimentos << " pavimentos, " << quartos << " quartos " << areaTerr  << "m2 de área de terreno e " << areaConst << "m2 de área construida. R$ " << valor << "." << endl;

}

class Terreno:public Imovel{

public:
    Terreno();
    ~Terreno();
    void exibeAtributos();
    void lerAtributos();

private:
    float area;
    
};

Terreno::Terreno()
{
    nome = "Terreno";
}

Terreno::~Terreno(){
    cout << "Deletando Terreno" << endl;
}

void Terreno::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> area;
}

void Terreno::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valor << endl;

}

class Imobiliaria{

public:
    Imobiliaria();
    virtual ~Imobiliaria();

    void addImovel(Imovel* imovel);
    void buscaImovel(string busca);
    void setAtributos(int i);
    void getAtributos(int i);

protected:

private:
    vector<Imovel*> imob;
};

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

int main(){

    Imobiliaria imobiliaria1;
    int i, qntd, tipo;
    string busca;

    cin >> qntd;

    for ( i = 0; i < qntd; i++){

        cin >> tipo;

        switch (tipo){

        case 0:
            cout << "Invalido";
            break;

        case 1:
            imobiliaria1.addImovel(new Casa());
            break;
        case 2:
            imobiliaria1.addImovel(new Apartamento());
            break;
        case 3:
            imobiliaria1.addImovel(new Terreno());
            break;
        default:
            cout << "Invalido";
            break;
        }
        imobiliaria1.setAtributos(i);
    }
    
    cin >> busca;
    imobiliaria1.buscaImovel(busca);
    
    return 0;
}