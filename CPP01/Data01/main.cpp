#include<iostream>
#include "Data.h"

using namespace std;

int main(){
    Data dt1, dt2, dt3;

    cout <<"Digite a data\n";

    cin >> dt1.dia;
    cin >> dt1.mes;
    cin >> dt1.ano;

    cout << dt1.dia << "/" << dt1.mes << "/" << dt1.ano << endl;

    return 0;
}