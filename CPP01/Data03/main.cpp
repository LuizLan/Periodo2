#include<iostream>
#include<string>
#include "Data03.h"

using namespace std;

int main(){
    Data03 data1;
    int dia, mes, ano, qntd, i;

    cin >> dia;  //mudar para utilizar o inicializador
    cin >> mes;
    cin >> ano;

    data1 = Data03(dia, mes, ano);

    cin >> qntd;
    
    for(i=0; i<qntd; i++){
        data1.avancarDia();
    }

    data1.printData();

    return 0;
}