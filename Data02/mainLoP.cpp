#include<iostream>
#include<string>

using namespace std;

class data02{

    private:

        int mes, dia, ano;

    public:
        data02();

        void setDia(int x);
        int getDia();
        void setMes(int x);
        int getMes();
        void setAno(int x);
        int getAno();

        void printData();
};

data02::data02(){
    dia = mes = ano = 1;
}

void data02::setDia(int x){
    dia = x;
}

void data02::setMes(int x){
    mes = x;
}

void data02::setAno(int x){
    ano = x;
}

int data02::getDia(){
    return dia;
}

int data02::getMes(){
    return mes;
}

int data02::getAno(){
    return ano;
}

void data02::printData(){

    string nomeMes;
    
    switch(mes){
    case 1:
        nomeMes = "Janeiro";
        break;
    case 2:
        nomeMes = "Fevereiro";
        break;
    case 3:
        nomeMes = "Março";
        break;
    case 4:
        nomeMes = "Abril";
        break;
    case 5:
        nomeMes = "Maio";
        break;
    case 6:
        nomeMes = "Junho";
        break;
    case 7:
        nomeMes = "Julho";
        break;
    case 8:
        nomeMes = "Agosto";
        break;
    case 9:
        nomeMes = "Setembro";
        break;
    case 10:
        nomeMes = "Outubro";
        break;
    case 11:
        nomeMes = "Novembro";
        break;
    case 12:
        nomeMes = "Dezembro";
        break;    
    default:
        nomeMes = "Indefinido";
        break;
    }

    cout << dia << " de " << nomeMes << " de " << ano << endl;

}

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