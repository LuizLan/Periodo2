#include"FiguraGeometrica.h"
#include"Quadrado.h"
#include"Retangulo.h"
#include"Triangulo.h"
#include"Circulo.h"

using namespace std;

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