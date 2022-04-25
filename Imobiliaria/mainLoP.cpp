#include<iostream>
#include<string>

using namespace std;

class Imovel{

public:
    Imovel();

    virtual void exibeAtributos() = 0;
    virtual void lerAtributos() = 0;

protected:
    string nome, disponibilidade;
    int tipo = -1;
    float valor;

private:
};

Imovel::Imovel(){

}

class Casa:public Imovel
{
public:
    Casa();

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

void Casa::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> pavimentos;
    cin >> quartos;
    cin >> areaTerr;
    cin >> areaConst;
}

void Casa::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << pavimentos << " pavimentos, " << quartos << " quartos, " << areaTerr  << "m2 de área de terreno e " << areaConst << "m2 de área construída. R$ " << valor << "." << endl;

}

class Apartamento:public Imovel
{
public:
    Apartamento();
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
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área, " << quartos << " quartos, " << andar  << " andar(es), " << condo << " de condomínio, " << garagem << " vaga(s) de garagem. R$ " << valor << "." << endl;

}

class Terreno:public Imovel{

public:
    Terreno();
    void exibeAtributos();
    void lerAtributos();

private:
    float area;
    
};

Terreno::Terreno()
{
    nome = "Terreno";
}

void Terreno::lerAtributos(){
    cin >> valor;
    cin >> disponibilidade;
    cin >> area;
}

void Terreno::exibeAtributos(){
    
    cout << nome << " para " << disponibilidade << ". " << area << "m2 de área de terreno. R$ " << valor << "." <<  endl;

}

int main(){

    Imovel *imoveis[100];
    int i, qntd, tipo;

    cin >> qntd;

    for ( i = 0; i < qntd; i++){

        cin >> tipo;

        switch (tipo)
        {
        case 0:
            
            break;

        case 1:

            imoveis[i] = new Casa();

            break;
        case 2:

            imoveis[i] = new Apartamento();

            break;
        case 3:

            imoveis[i] = new Terreno();

            break;
        default:

            break;
        }

        imoveis[i]->lerAtributos();

    }
    
    for ( i = 0; i < qntd; i++){
            imoveis[i]->exibeAtributos();
    }

    return 0;
}