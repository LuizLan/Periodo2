#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include"Pessoa.h"

using namespace std;

void geraArquivo(string path, string data) {
    fstream fs;
    fs.open(path.c_str(), fstream::out);
    if (fs.is_open()) {
        fs.write(data.c_str(), data.size());
        fs.close();
    } else
        cout << "Nao foi possivel abrir o arquivo " << path;
}
void geraArquivos() {
    string data1 = "1\nJoao Pedro\n(83) 8888-8888\n"
                  "2\nMaria Teresa\n(83) 9999-9999\n000.000.000-00\n"
                  "2\nLuiz Pereira\n(83) 7777-7777\n111.111.111-11\n"
                  "1\nDenis Carlos\n(83) 5555-5555\n";
    string data2 = "2\nLuma Oliveira\n(83) 1111-1111\n222.222.222-22\n"
                  "2\nTercio Marquies\n(83) 2222-2222\n333.333.222-33\n"
                  "1\nJonas Luz\n(83) 3333-3333\n";
    geraArquivo("dados01.txt", data1);
    geraArquivo("dados02.txt", data2);
}

Pessoa lerArquivo(string arquivo) {
    Pessoa pessoa01 = Pessoa(0, "0", "0");
    fstream fs;
    int tipo;
    string nome, telefone, cpf;
    fs.open(arquivo, fstream::in);
    if (!fs.is_open()) {
        cout << "Erro ao abrir arquivo para leitura\n";
        return pessoa01;
    }
    while (!fs.eof()) {
        fs >> tipo;
        if (fs.eof())
            break;
        //fs.ignore();
        getline(fs, nome);
        getline(fs, telefone);
        if (tipo == 2){
            getline(fs, cpf);   
            pessoa01 = Pessoa(2, nome, telefone, cpf);         
        }else{
            pessoa01 = Pessoa(1, nome, telefone);
        }
    }
    fs.close();
    return pessoa01;
}

int main(){

    fstream fs;
    vector<Pessoa> pessoas;
    string arquivo;

    geraArquivos();

    getline(cin, arquivo);

    pessoas.push_back(lerArquivo(arquivo));

    for (int i = 0; i < pessoas.size(); i++){
        
        cout << "Nome: " + pessoas.at(i).getNome() + ", tel: " + pessoas.at(i).getTelefone();

        if (pessoas.at(i).getTipo() == 2){   
            cout << ", CPF: " + pessoas.at(i).getCpf() << endl;
        }else{
            cout << endl;
        }
    }

    return 0;
}