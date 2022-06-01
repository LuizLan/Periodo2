#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Insumos{

public:
    Insumos();
    Insumos(string tipoInsu, string nome, string vencimento, string fabricante, int qntd, float valor);
    virtual ~Insumos();

protected:

private:
    string nome, vencimento, fabricante, tipoInsu;
    int qntd;
    float valor;

};

Insumos::Insumos(){

}

Insumos::Insumos(string T,string N, string Ven, string F, int Q, float Val){
    tipoInsu = T;
    nome = N;
    vencimento = Ven;
    fabricante = F;
    qntd = Q;
    valor = Val;
}

Insumos::~Insumos(){
    cout << "Deletando Insumos" << endl;
}

class Epi:public Insumos{

public:
    Epi();
    Epi(string tipoInsu, string nome, string vencimento, string fabricante, int qntd, float valor, string tipo, string descricao);
    ~Epi();

private:
    string tipo, descricao;
};

Epi::Epi(){

}
Epi::Epi(string tipoInsul, string N, string Ven, string F, int Q, float Val, string T, string D)
:Insumos(tipoInsul, N, Ven, F, Q, Val){
    tipo = T;
    descricao = D;
}
Epi::~Epi(){
    cout << "Deletando EPI" << endl;
}

class Medicamento:public Insumos{

public:
    Medicamento();
    Medicamento(string tipo, string nome, string vencimento, string fabricante, int qntd, float valor, string Dose, string admin, int dispo);
    ~Medicamento();

protected:
    string dosagem, administracao;
    int disponibilidade;


private:

};

Medicamento::Medicamento(){

}

Medicamento::Medicamento(string tipo, string N, string Ven, string F, int Q, float Val, string Dos, string Adm, int Dis)
:Insumos(tipo, N, Ven, F, Q, Val){
   dosagem = Dos;
   administracao = Adm;
   disponibilidade = Dis;
}

Medicamento::~Medicamento(){
   cout << "Deletando Medicamento" << endl;
}

class Vacina:public Insumos{

public:
    Vacina();
    Vacina(string tipo, string nome, string vencimento, string fabricante, int qntd, float valor, string tipoV, int qntdDos, int intervalo);
    ~Vacina();

protected:
    string tipoV;
    int intervalo, qntdDos;

private:

};

Vacina::Vacina(){

}

Vacina::Vacina(string tipo, string N, string Ven, string F,int Q, float Val, string TV, int Dos, int I)
:Insumos(tipo, N, Ven, F, Q, Val){
    tipoV = TV;
    qntdDos = Dos;
    intervalo = I;
}

Vacina::~Vacina(){
    cout << "Deletando Vacina" << endl;
}

class Local{

public:
    Local();
    ~Local();

    void addInsumoArr(Insumos *In, int i);
    void addInsumoVec(Insumos *In);

protected:

private:
    Insumos *insumosArr[10];
    vector<Insumos*> insumosVec = vector<Insumos*>(10);

};

Local::Local(){

}

Local::~Local(){

    cout << "Deletando Local" << endl;

    for (int i = 0; i < 3; i++){
        delete insumosArr[i];
    }
    for (int i = 0; i < insumosVec.size(); i++){
        delete insumosVec.at(i);
    }
    
}

void Local::addInsumoArr(Insumos *In, int i){
    insumosArr[i] = In;
}
void Local::addInsumoVec(Insumos *In){
    insumosVec.push_back(In);
}

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