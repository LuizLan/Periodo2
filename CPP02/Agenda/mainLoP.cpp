#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Endereco{

public:

    Endereco();
    Endereco(string R, string B, string C, string E, string CEP, int N);
    ~Endereco();

    virtual string toString();

private:

    string rua, bairro, cidade, estado, CEP;
    int numero;

};

Endereco::Endereco()
{

}

Endereco::Endereco(string R, string B, string C, string E, string CEP, int N){
    rua = R;
    bairro = B;
    cidade = C;
    estado = E;
    this->CEP = CEP;
    numero = N;
}

Endereco::~Endereco()
{

}

string Endereco::toString(){
    string num(to_string(numero));
    string ender;

    ender = rua + ", " + num + ", " + bairro + ". " + cidade + " - " + estado + ". CEP: " + CEP;

    return ender;
}

class Pessoa : public Endereco{

public:

    Pessoa();
    Pessoa(string N);
    Pessoa(string N, Endereco E, string T);
    ~Pessoa();

    string toString();

private:
    string nome, telefone;
    Endereco endereco;
};

Pessoa::Pessoa()
{

}

Pessoa::Pessoa(string N){
    nome = N;
}

Pessoa::Pessoa(string N, Endereco E, string T){
    nome = N;
    endereco = E;
    telefone = T;
}

Pessoa::~Pessoa()
{

}

string Pessoa::toString(){
    
    string contato;

    contato = nome + ", " + telefone + "\n" + endereco.toString();

    return contato;
}

int main(){

    int i, count;
    vector<Pessoa> agenda;
    string rua, bairro, cidade, estado, CEP, nome, telefone;
    float numero;
    
    cin >> count;
    cin.ignore();

    for ( i = 0; i < count; i++){
        getline(cin, nome);
        getline(cin, telefone);
        getline(cin, rua);
        cin >> numero;
        cin.ignore();
        getline(cin, bairro);
        getline(cin, cidade);
        getline(cin, estado);
        getline(cin, CEP);

        Endereco ender = Endereco(rua, bairro, cidade, estado, CEP, numero);
        agenda.push_back(Pessoa(nome, ender, telefone));
    }
    
    for ( Pessoa contato : agenda){
        cout << contato.toString() << endl << endl;
    }

    return 1;
}