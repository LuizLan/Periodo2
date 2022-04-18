#include <iostream>
#include <stdio.h>
#include <string>
#include "Data03.h"

using namespace std;

Data03::Data03()
{
}

int Data03::getDiaMes()
{

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 2:
        return 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        cout << "erro" << endl;
        return -1;
    }
}

Data03::Data03(int d, int m, int a)
{

    dia = d;
    mes = m;
    ano = a;

    if (mes > 12 || mes < 0)
    {
        cout << "atributo mes invalido" << endl;
        mes = 1;
    }

    switch (getDiaMes())
    {
    case 31:
        if (dia > 31 || dia < 1)
        {
            cout << "Atributo dia invalido" << endl;
            dia = 1;
        }
        break;
    case 30:
        if (dia > 30 || dia < 1)
        {
            cout << "Atributo dia invalido" << endl;
            dia = 1;
        }
        break;
    case 28:
        if (dia > 28 || dia < 1)
        {
            cout << "Atributo dia invalido" << endl;
            dia = 1;
        }
        break;
    default:
        cout << "atributo dia invalido" << endl;
        dia = 1;
    }
}

void Data03::setDia(int d)
{
    dia = d;
}
void Data03::setMes(int m)
{
    mes = m;
}
void Data03::setAno(int a)
{
    ano = a;
}
int Data03::getDia()
{
    return dia;
}
int Data03::getMes()
{
    return mes;
}
int Data03::getAno()
{
    return ano;
}

void Data03::printData()
{
    printf("%02d/%02d/%d", dia, mes, ano);
}

void Data03::avancarDia()
{ // mudar para usar getDiaMes()

    switch (getDiaMes())
    {
    case 31:
        if (dia == 31 && mes != 12)
        {
            dia = 1;
            mes++;
        }
        else if (dia == 31 && mes == 12)
        {
            dia = 1;
            mes = 1;
            ano++;
        }
        else
        {
            dia++;
        }
        break;
    case 28:
        if (dia == 28)
        {
            dia = 1;
            mes++;
        }
        else
        {
            dia++;
        }
        break;
    case 30:
        if (dia == 30)
        {
            dia = 1;
            mes++;
        }
        else
        {
            dia++;
        }
        break;
    default:
        cout << "erro" << endl;
        break;
    }
}
