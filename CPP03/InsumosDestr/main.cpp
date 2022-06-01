#include"Local.h"
#include"Epi.h"
#include"Medicamento.h"
#include"Vacina.h"

using namespace std;

int main(){
    string nome, tipo, admin, dispo, descricao, vencimento, fabricante, tipoV, disponibilidade, dose, tempoDose;
    int qntd, intervalo, dosagem;
    float valor;
    Local gerenciador;

    getline(cin, nome);
    cin >> qntd;
    cin.ignore();
    cin >> valor;
    cin.ignore();
    getline(cin, vencimento);
    getline(cin, fabricante);
    getline(cin, tipoV);
    cin >> dosagem;
    cin.ignore();
    cin >> intervalo;
    cin.ignore();

    gerenciador.addInsumoArr(new Vacina("vacina", nome, vencimento, fabricante, qntd, valor, tipoV, dosagem, intervalo), 0);
    gerenciador.addInsumoVec(new Vacina("vacina", nome, vencimento, fabricante, qntd, valor, tipoV, dosagem, intervalo));
   
    getline(cin, nome);
    cin >> qntd;
    cin.ignore();
    cin >> valor;
    cin.ignore();
    getline(cin, vencimento);
    getline(cin, fabricante);
    getline(cin, dose);
    getline(cin, tempoDose);
    getline(cin, admin);

    gerenciador.addInsumoArr(new Medicamento("medicamento", nome, vencimento, fabricante, qntd, valor, dose, admin, qntd), 1);
    gerenciador.addInsumoVec(new Medicamento("medicamento", nome, vencimento, fabricante, qntd, valor, dose, admin, qntd));

    getline(cin, nome);
    cin >> qntd;
    cin.ignore();
    cin >> valor;
    cin.ignore();
    getline(cin, vencimento);
    getline(cin, fabricante);
    getline(cin, tipo);
    getline(cin,descricao);

    gerenciador.addInsumoArr(new Epi("EPI", nome, vencimento, fabricante, qntd, valor, tipo, descricao), 2);
    gerenciador.addInsumoVec(new Epi("EPI", nome, vencimento, fabricante, qntd, valor, tipo, descricao));

    return 0;
}