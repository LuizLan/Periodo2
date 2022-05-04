#include<iostream>
#include<string>

using namespace std;

class FiguraGeometrica{

public:
    FiguraGeometrica();
    FiguraGeometrica(int Tipo);
    ~FiguraGeometrica();

    virtual float calcularArea() = 0;
    virtual void lerAtributosArea() = 0;
    string getNome();

protected:
    string nome;
    int tipo;

private:

};

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

class Quadrado:public FiguraGeometrica{

public:
    Quadrado();
    ~Quadrado();

    void lerAtributosArea();
    float calcularArea();

private:
    float lado;
};

Quadrado::Quadrado():FiguraGeometrica(1){
    
}
Quadrado::~Quadrado(){

}

void Quadrado::lerAtributosArea(){
    cin >> lado;
}

float Quadrado::calcularArea(){
    return lado*lado;
}

class Retangulo:public FiguraGeometrica{

public:
    Retangulo();
    ~Retangulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float largura, altura;
};

Retangulo::Retangulo():FiguraGeometrica(2){

}

Retangulo::~Retangulo(){

}

void Retangulo::lerAtributosArea(){
    cin >> altura;
    cin >> largura;
}
float Retangulo::calcularArea(){
    return altura*largura;
}

class Triangulo:public FiguraGeometrica{

public:
    Triangulo();
    ~Triangulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float base, altura;
};

Triangulo::Triangulo():FiguraGeometrica(3){

}

Triangulo::~Triangulo(){

}

void Triangulo::lerAtributosArea(){
    cin >> base;
    cin >> altura;
}
float Triangulo::calcularArea(){
    return (base*altura)/2;
}

class Circulo:public FiguraGeometrica{

public:
    Circulo();
    ~Circulo();

    void lerAtributosArea();
    float calcularArea();

private:
    float raio;
};

Circulo::Circulo():FiguraGeometrica(4){

}

Circulo::~Circulo(){

}

void Circulo::lerAtributosArea(){
    cin >> raio;
}
float Circulo::calcularArea(){
    return 3.14*raio*raio;
}

int main(){

    FiguraGeometrica *figuras[10];

    int i,tipo;

    i=0;

    while (1){
        cin >> tipo;

        if (tipo==0){
            break;
        }
        else if (tipo==1){

            figuras[i] = new Quadrado();
            figuras[i]->lerAtributosArea();
            cout << figuras[i]->getNome() << " polimórfico de área " << figuras[i]->calcularArea() << endl;
        }
        else if (tipo==2){

            figuras[i] = new Retangulo();
            figuras[i]->lerAtributosArea();
            cout << figuras[i]->getNome() << " polimórfico de área " << figuras[i]->calcularArea() << endl;
        }else if (tipo==3){

            figuras[i] = new Triangulo();
            figuras[i]->lerAtributosArea();
            cout << figuras[i]->getNome() << " polimórfico de área " << figuras[i]->calcularArea() << endl;
        }else if(tipo==4){

            figuras[i] = new Circulo();
            figuras[i]->lerAtributosArea();
            cout << figuras[i]->getNome() << " polimórfico de área " << figuras[i]->calcularArea() << endl;
        }

        i++;
    }
    
    return 1;
}