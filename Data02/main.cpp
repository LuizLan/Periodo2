#include<iostream>
#include<string>
#include "data02.h"

using namespace std;

int main(){
    data02 data1;
    int dia, mes, ano;

    cin >> dia;
    data1.setDia(dia);
    cin >> mes;
    data1.setMes(mes);
    cin >> ano;
    data1.setAno(ano);

    data1.printData();

    return 0;
}