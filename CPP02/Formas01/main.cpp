#include"FiguraGeometrica.h"
#include"Quadrado.h"
#include"Retangulo.h"
#include"Triangulo.h"
#include"Circulo.h"

using namespace std;

int main(){

    Quadrado quadr;
    Retangulo retan;
    Triangulo trian;
    Circulo circ;

    int tipo;

    while (1){
        cin >> tipo;

        if (tipo==0){
            break;
        }
        else if (tipo==1){
            quadr.lerAtributosArea();
            cout << quadr.getNome() << " de área " << quadr.calcularArea() << endl;
        }
        else if (tipo==2){
            retan.lerAtributosArea();
            cout << retan.getNome() << " de área " << retan.calcularArea() << endl;
        }else if (tipo==3){
            trian.lerAtributosArea();
            cout << trian.getNome() << " de área " << trian.calcularArea() << endl;
        }else if(tipo==4){
            circ.lerAtributosArea();
            cout << circ.getNome() << " de área " << circ.calcularArea() << endl;
        }
    }
    
    return 1;
}