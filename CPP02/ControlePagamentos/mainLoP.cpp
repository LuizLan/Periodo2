#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Pagamento
{
public:
    Pagamento();
    ~Pagamento();

    float getValorPagamento();
    string getNomeFuncionario();
    void setValorPagamento(float P);
    void setNomeFuncionario(string N);


private:

    float valorPagamento;
    string nomeDoFuncionario;
};

Pagamento::Pagamento(){

    valorPagamento = 0;

}

Pagamento::~Pagamento()
{

}

float Pagamento::getValorPagamento(){
    return valorPagamento;
}

string Pagamento::getNomeFuncionario(){
    return nomeDoFuncionario;
}
void Pagamento::setValorPagamento(float P){
    valorPagamento = P;
}
void Pagamento::setNomeFuncionario(string N){
    nomeDoFuncionario = N;
}

class ControleDePagamentos : public Pagamento
{
public:
    ControleDePagamentos();
    ~ControleDePagamentos();
    
    void setPagamento(Pagamento P);
    Pagamento getPagamento(int I);
    float calculaTotalDePagamentos();
    int getIndexFuncionario(string nomeFuncionario);

private:

    vector<Pagamento> pagamentos;

};

ControleDePagamentos::ControleDePagamentos()
{

}

ControleDePagamentos::~ControleDePagamentos()
{

}

void ControleDePagamentos::setPagamento(Pagamento P){
    pagamentos.push_back(P);
}

Pagamento ControleDePagamentos::getPagamento(int I){
    return pagamentos.at(I);
}

float ControleDePagamentos::calculaTotalDePagamentos(){
    float total = 0;

    for(Pagamento valor : pagamentos){
        total = total + valor.getValorPagamento();
    }
}

int ControleDePagamentos::getIndexFuncionario(string nomeFuncionario){
    
    int i = 0;
    
    for(Pagamento nome : pagamentos){

        
        if(nome.getNomeFuncionario().find(nomeFuncionario) != string::npos){
            return i;
        }
        
        i++;
    }
    return -1;
}

int main(){

    ControleDePagamentos controlador;
    Pagamento pagamento01;
    int qntd, i;
    float valor;
    string nome;

    cin >> qntd; //qntd de pagamentos a ser realizados

    for ( i = 0; i < qntd; i++){
        cin >> valor;
        pagamento01.setValorPagamento(valor);
        cin.ignore();
        getline(cin, nome);
        pagamento01.setNomeFuncionario(nome);

        controlador.setPagamento(pagamento01);
    }
    
    getline(cin,nome);

    i = controlador.getIndexFuncionario(nome);

    if( i == -1){
        cout << nome << " não encontrado(a)." << endl;
        cout << "Total: R$ " <<controlador.calculaTotalDePagamentos() << endl;
    }else{
        cout << controlador.getPagamento(i).getNomeFuncionario() << ": " << "R$ " << controlador.getPagamento(i).getValorPagamento() << endl;
        cout << "Total: R$ " <<controlador.calculaTotalDePagamentos() << endl;
    }

    return 1;
}